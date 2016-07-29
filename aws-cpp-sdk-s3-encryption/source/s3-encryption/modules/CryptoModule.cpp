/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3-encryption/modules/CryptoModule.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/CryptoStream.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::S3::Model;
using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

namespace Aws
{
namespace S3Encryption
{
namespace Modules
{
static const char* const Allocation_Tag = "CryptoModule";
static const size_t IV_SIZE = 16u;
static const size_t TAG_SIZE = 16u;
static const size_t AES_BLOCK_SIZE = 16u;
static const size_t AES_GCM_PAD_SIZE = 12u;
static const Aws::String BYTES_SPECIFIER = "bytes=-";

CryptoModule::CryptoModule(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    m_s3Client(s3Client), m_encryptionMaterials(encryptionMaterials), m_contentCryptoMaterial(ContentCryptoMaterial()),
	m_cryptoConfig(cryptoConfig), m_cipher(nullptr)
{
}

Aws::S3::Model::PutObjectOutcome CryptoModule::PutObjectSecurely(Aws::S3::Model::PutObjectRequest & request)
{
	PopulateCryptoContentMaterial();
	InitEncryptionCipher();
	PadRequestContentLength(request);
	WrapRequestWithCipher(request);
    m_encryptionMaterials->EncryptCEK(m_contentCryptoMaterial);

    if (m_cryptoConfig.GetStorageMethod() == StorageMethod::INSTRUCTION_FILE)
    {
        Handlers::InstructionFileHandler handler;
		PutObjectRequest instructionFileRequest;
		instructionFileRequest.WithBucket(request.GetBucket());
		instructionFileRequest.WithKey(request.GetKey());
        handler.WriteData(instructionFileRequest, m_contentCryptoMaterial);
        PutObjectOutcome instructionOutcome = m_s3Client.PutObject(instructionFileRequest);
        if (!instructionOutcome.IsSuccess())
        {
            AWS_LOGSTREAM_ERROR(Allocation_Tag, "Instruction file put operation not successful.");
            return PutObjectOutcome(instructionOutcome.GetError());
        }
    }
    else
    {
        Handlers::MetadataHandler handler;
        handler.WriteData(request, m_contentCryptoMaterial);
    }	
	
    PutObjectOutcome outcome = m_s3Client.PutObject(request);
    if (!outcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(Allocation_Tag, "S3 put object securely operation not successful.");
        return PutObjectOutcome(outcome.GetError());
    }
    return PutObjectOutcome(PutObjectResult(outcome.GetResultWithOwnership()));
}

Aws::S3::Model::GetObjectOutcome CryptoModule::GetObjectSecurely(Aws::S3::Model::GetObjectRequest& request)
{
	HeadObjectRequest headRequest;
	headRequest.WithKey(request.GetKey());
	headRequest.WithBucket(request.GetBucket());
	HeadObjectOutcome headOutcome = m_s3Client.HeadObject(headRequest);

	auto metadata = headOutcome.GetResult().GetMetadata();
	if (metadata.find(CONTENT_KEY_HEADER) == metadata.end())
	{
		Handlers::InstructionFileHandler handler;
		GetObjectRequest instructionFileRequest;
		instructionFileRequest.SetKey(request.GetKey() + Handlers::DEFAULT_INSTRUCTION_FILE_SUFFIX);
		instructionFileRequest.SetBucket(request.GetBucket());
		GetObjectOutcome instructionOutcome = m_s3Client.GetObject(instructionFileRequest);
		if (!instructionOutcome.IsSuccess())
		{
			AWS_LOGSTREAM_ERROR(Allocation_Tag, "Instruction file get operation not successful.");
			return GetObjectOutcome(instructionOutcome.GetError());
		}
		m_contentCryptoMaterial = handler.ReadData(instructionOutcome.GetResult());
	}
	else
	{
		Handlers::MetadataHandler handler;
		m_contentCryptoMaterial = handler.ReadData(headOutcome.GetResult());
	}

	StrictAuthenticatedEncryptionCheck(request);
	m_encryptionMaterials->DecryptCEK(m_contentCryptoMaterial);
	if (m_contentCryptoMaterial.GetContentCryptoScheme() == ContentCryptoScheme::GCM)
	{
		CryptoBuffer tagFromBody = GetTag(request);
		InitDecryptionCipher(tagFromBody);
	}
	else
	{
		InitDecryptionCipher();
	}
	
    GetObjectOutcome outcome = UnwrapRequestWithCipher(request);
    return GetObjectOutcome(GetObjectResult(outcome.GetResultWithOwnership()));
}

const Aws::S3::Model::PutObjectRequest & CryptoModule::WrapRequestWithCipher(Aws::S3::Model::PutObjectRequest & request)
{
	const std::shared_ptr<Aws::IOStream>& iostream = request.GetBody();
	request.SetBody(Aws::MakeShared<Aws::Utils::Crypto::SymmetricCryptoStream>(Allocation_Tag, (Aws::IStream&)*iostream, CipherMode::Encrypt, (*m_cipher)));
	iostream->clear();
	iostream->seekg(0, std::ios_base::beg);
	return request;
}

const Aws::S3::Model::GetObjectOutcome CryptoModule::UnwrapRequestWithCipher(Aws::S3::Model::GetObjectRequest& request)
{
	auto userSuppliedStreamFactory = request.GetResponseStreamFactory();
	auto userSuppliedStream = userSuppliedStreamFactory();

	request.SetResponseStreamFactory(
		[&] { return Aws::New<SymmetricCryptoStream>(Allocation_Tag, (Aws::OStream&)*userSuppliedStream, CipherMode::Decrypt, *m_cipher); }
	);
	GetObjectOutcome outcome = m_s3Client.GetObject(request);
	if (!outcome.IsSuccess())
	{
		AWS_LOGSTREAM_ERROR(Allocation_Tag, "S3 get object operation not successful.");
		return GetObjectOutcome(std::move(outcome.GetError()));
	}

	GetObjectResult&& result = outcome.GetResultWithOwnership();
	((SymmetricCryptoStream&)result.GetBody()).Finalize();

    userSuppliedStream->clear();
    userSuppliedStream->seekg(0, std::ios_base::beg);
    //replacing the stream here will free the memory from the crypto stream, and then set it to the previously allocated stream.
    //result now owns the stream and will free the memory when finished.
    result.ReplaceBody(userSuppliedStream);

	return GetObjectOutcome(GetObjectResult(std::move(result)));
}

const Aws::S3::Model::PutObjectRequest & CryptoModule::PadRequestContentLength(Aws::S3::Model::PutObjectRequest & request)
{
	ContentCryptoScheme currentScheme = m_contentCryptoMaterial.GetContentCryptoScheme();
	request.GetBody()->seekg(0, std::ios_base::end);
	size_t prePaddingLength = static_cast<size_t>(request.GetBody()->tellg());
	if (currentScheme == ContentCryptoScheme::CBC)
	{
		auto postPaddingLength = (prePaddingLength % AES_BLOCK_SIZE) == 0 ? AES_BLOCK_SIZE : AES_BLOCK_SIZE - prePaddingLength % AES_BLOCK_SIZE;
		postPaddingLength += prePaddingLength;
		request.SetContentLength(postPaddingLength);
		request.GetBody()->seekg(0, std::ios_base::beg);
		return request;
	}
	else if (currentScheme == ContentCryptoScheme::GCM)
	{
		auto postPaddingLength = prePaddingLength + AES_BLOCK_SIZE;
		request.SetContentLength(postPaddingLength);
		request.GetBody()->seekg(0, std::ios_base::beg);
		return request;
	}
	else
	{
		request.SetContentLength(prePaddingLength);
		request.GetBody()->seekg(0, std::ios_base::beg);
		return request;
	}
}

void CryptoModule::StrictAuthenticatedEncryptionCheck(const Aws::S3::Model::GetObjectRequest & request)
{
	Aws::String emptyRange = "";
	if (m_cryptoConfig.GetCryptoMode() == CryptoMode::STRICT_AUTHENTICATED_ENCRYPTION)
	{
		if (request.GetRange() != emptyRange)
		{
			AWS_LOGSTREAM_FATAL(Allocation_Tag, "Range-Get Operations not allowed with Strict Authenticated Encryption mode.")
			assert(0);
		}
	}
}

//This is my current implementation to get the tag. It is failing on the hex decode.
CryptoBuffer CryptoModule::GetTag(const GetObjectRequest & request)
{
	GetObjectRequest getTag;
	getTag.WithBucket(request.GetBucket());
	getTag.WithKey(request.GetKey());
	Aws::String tagLengthRangeSpecifier = BYTES_SPECIFIER + Utils::StringUtils::to_string(m_contentCryptoMaterial.GetCryptoTagLength());
	getTag.SetRange(tagLengthRangeSpecifier);
	GetObjectOutcome tagOutcome = m_s3Client.GetObject(getTag);
	Aws::OStream& tagStream = tagOutcome.GetResult().GetBody();
	Aws::OStringStream ss;
	ss << tagStream.rdbuf();
	std::cout << ss.str() << std::endl;
	return HashingUtils::HexDecode(ss.str());
}




CryptoModuleEO::CryptoModuleEO(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleEO::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
	m_contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(IV_SIZE));
	m_contentCryptoMaterial.SetCryptoTagLength(0u);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::CBC);
}

void CryptoModuleEO::InitEncryptionCipher()
{
	m_cipher = CreateAES_CBCImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV());
}

void CryptoModuleEO::InitDecryptionCipher(const Aws::Utils::CryptoBuffer&)
{
	m_cipher = CreateAES_CBCImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV());
}




CryptoModuleAE::CryptoModuleAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleAE::PopulateCryptoContentMaterial()
{
	m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
	m_contentCryptoMaterial.SetCryptoTagLength(TAG_SIZE);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
}

void CryptoModuleAE::InitEncryptionCipher()
{
	m_cipher = Aws::MakeShared<AES_GCM_AppendedTag>(Allocation_Tag, m_contentCryptoMaterial.GetContentEncryptionKey());
	m_contentCryptoMaterial.SetIV(m_cipher->GetIV());
}

void CryptoModuleAE::InitDecryptionCipher(const Aws::Utils::CryptoBuffer& tag)
{
	m_cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV(), tag);
}




CryptoModuleStrictAE::CryptoModuleStrictAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleStrictAE::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
	m_contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(IV_SIZE));
	m_contentCryptoMaterial.SetCryptoTagLength(TAG_SIZE);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
}

void CryptoModuleStrictAE::InitEncryptionCipher()
{
	m_cipher = Aws::MakeShared<AES_GCM_AppendedTag>(Allocation_Tag, m_contentCryptoMaterial.GetContentEncryptionKey());
	m_contentCryptoMaterial.SetIV(m_cipher->GetIV());
}

void CryptoModuleStrictAE::InitDecryptionCipher(const Aws::Utils::CryptoBuffer& tag)
{
	m_cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV(), tag);
}




AES_GCM_AppendedTag::AES_GCM_AppendedTag(const CryptoBuffer& key) : Aws::Utils::Crypto::SymmetricCipher(),
    m_cipher(CreateAES_GCMImplementation(key))
{
    m_key = key;
    m_initializationVector = m_cipher->GetIV();
}

AES_GCM_AppendedTag::operator bool() const
{
    return *m_cipher && !m_failure;
}

CryptoBuffer AES_GCM_AppendedTag::EncryptBuffer(const CryptoBuffer& unEncryptedData)
{
    return m_cipher->EncryptBuffer(unEncryptedData);
}

CryptoBuffer AES_GCM_AppendedTag::FinalizeEncryption()
{
    CryptoBuffer&& finalizeBuffer = m_cipher->FinalizeEncryption();
    m_tag = m_cipher->GetTag();
    return CryptoBuffer({(ByteBuffer*)&finalizeBuffer, (ByteBuffer*)&m_tag});
}

CryptoBuffer AES_GCM_AppendedTag::DecryptBuffer(const CryptoBuffer&)
{
    //don't use this in decryption mode.
    assert(0);
    m_failure = true;
    return CryptoBuffer();
}

CryptoBuffer AES_GCM_AppendedTag::FinalizeDecryption()
{
    //don't use this in decryption mode.
    assert(0);
    m_failure = true;
    return CryptoBuffer();
}

void AES_GCM_AppendedTag::Reset()
{
    m_cipher->Reset();
    m_failure = false;
}

}
}
}
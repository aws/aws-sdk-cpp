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
static const size_t BlockSizeBytes = 16;

CryptoModule::CryptoModule() :
	m_s3Client(nullptr), m_encryptionMaterials(nullptr), m_contentCryptoMaterial(ContentCryptoMaterial()),
	m_cryptoConfig(CryptoConfiguration()), cipher(nullptr)
{
}

CryptoModule::CryptoModule(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    m_encryptionMaterials(encryptionMaterials), m_cryptoConfig(cryptoConfig), m_s3Client(s3Client)
{
}

Aws::S3::Model::PutObjectOutcome CryptoModule::PutObjectSecurely(Aws::S3::Model::PutObjectRequest & request)
{
    PopulateCryptoContentMaterial();
	InitCipher();
    EncryptS3Object(request);
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
	//head object to get metadata -- populate crypto content material, then decrypt
	HeadObjectRequest headRequest;
	headRequest.WithKey(request.GetKey());
	headRequest.WithBucket(request.GetBucket());
	HeadObjectOutcome headOutcome = m_s3Client.HeadObject(headRequest);

	auto metadata = headOutcome.GetResult().GetMetadata();
	if (metadata.find(CONTENT_KEY_HEADER) == metadata.end())
	{
		//use instruction file
		Handlers::InstructionFileHandler handler;
		GetObjectRequest instructionFileRequest;
		instructionFileRequest.SetKey(request.GetKey() + Handlers::DEFAULT_INSTRUCTION_FILE_SUFFIX);
		instructionFileRequest.SetVersionId(request.GetVersionId());
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
		//use metadata
		Handlers::MetadataHandler handler;
		m_contentCryptoMaterial = handler.ReadData(headOutcome.GetResult());
	}

	m_encryptionMaterials->DecryptCEK(m_contentCryptoMaterial);
	InitCipher();
    GetObjectOutcome outcome = DecryptS3Object(request);
    return GetObjectOutcome(GetObjectResult(outcome.GetResultWithOwnership()));
}

void CryptoModule::SetEncryptionMaterials(const std::shared_ptr<Materials::EncryptionMaterials> encryptionMaterials)
{
    m_encryptionMaterials = encryptionMaterials;
}

void CryptoModule::SetCryptoConfiguration(const CryptoConfiguration & cryptoConfig)
{
    m_cryptoConfig = cryptoConfig;
}

void CryptoModule::SetS3Client(const Aws::S3::S3Client& s3Client)
{
    m_s3Client = s3Client;
}

const Aws::S3::Model::PutObjectRequest & CryptoModule::EncryptS3Object(Aws::S3::Model::PutObjectRequest & request)
{
	const std::shared_ptr<Aws::IOStream>& iostream = request.GetBody();
	request.SetBody(Aws::MakeShared<Aws::Utils::Crypto::SymmetricCryptoStream>(Allocation_Tag, (Aws::IStream&)*iostream, CipherMode::Encrypt, (*cipher)));
	cipher->FinalizeEncryption();
	return request;
}

const Aws::S3::Model::GetObjectOutcome CryptoModule::DecryptS3Object(Aws::S3::Model::GetObjectRequest& request)
{
	auto userSuppliedStreamFactory = request.GetResponseStreamFactory();
	auto userSuppliedStream = userSuppliedStreamFactory();

	request.SetResponseStreamFactory(
		[&] { return Aws::New<SymmetricCryptoStream>(Allocation_Tag, (Aws::OStream&)*userSuppliedStream, CipherMode::Decrypt, *cipher); }
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




CryptoModuleEO::CryptoModuleEO() :
	CryptoModule()
{
}

CryptoModuleEO::CryptoModuleEO(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleEO::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
    m_contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(BlockSizeBytes));
    m_contentCryptoMaterial.SetCryptoTagLength(0u);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::CBC);
}

void CryptoModuleEO::InitCipher()
{
	cipher = CreateAES_CTRImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV());
}




CryptoModuleAE::CryptoModuleAE() :
	CryptoModule()
{
}

CryptoModuleAE::CryptoModuleAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleAE::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
    m_contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(BlockSizeBytes));
    m_contentCryptoMaterial.SetCryptoTagLength(BlockSizeBytes);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
}

void CryptoModuleAE::InitCipher()
{
	//here we need to use the tag if we are decrypting. Will use once GCM cipher is implemented
	cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV());
}




CryptoModuleStrictAE::CryptoModuleStrictAE() :
	CryptoModule()
{
}

CryptoModuleStrictAE::CryptoModuleStrictAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleStrictAE::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
    m_contentCryptoMaterial.SetIV(SymmetricCipher::GenerateIV(BlockSizeBytes));
    m_contentCryptoMaterial.SetCryptoTagLength(BlockSizeBytes);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
}

void CryptoModuleStrictAE::InitCipher()
{
	//here we need to use the tag if we are decrypting. Will use once GCM cipher is implemented
	cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV());
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
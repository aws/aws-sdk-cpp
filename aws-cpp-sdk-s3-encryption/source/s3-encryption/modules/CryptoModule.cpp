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
static const char* const ALLOCATION_TAG = "CryptoModule";
static const size_t CBC_IV_SIZE = 16u;
static const size_t GCM_IV_SIZE = 12u;
static const size_t TAG_SIZE_BYTES = 16u;
static const size_t AES_BLOCK_SIZE = 16u;
static const Aws::String LAST_BYTES_SPECIFIER = "bytes=-";
static const Aws::String FIRST_BYTES_SPECIFIER = "bytes=0-";
static const size_t BITS_IN_BYTE = 8u;

CryptoModule::CryptoModule(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    m_s3Client(s3Client), m_encryptionMaterials(encryptionMaterials), m_contentCryptoMaterial(ContentCryptoMaterial()),
    m_cryptoConfig(cryptoConfig), m_cipher(nullptr)
{
}

Aws::S3::Model::PutObjectOutcome CryptoModule::PutObjectSecurely(const Aws::S3::Model::PutObjectRequest& request, const std::function < Aws::S3::Model::PutObjectOutcome(const Aws::S3::Model::PutObjectRequest&) >& putObjectFunction)
{
    PutObjectRequest copyRequest(request);
    PopulateCryptoContentMaterial();
    InitEncryptionCipher();
    SetContentLength(copyRequest);
    m_encryptionMaterials->EncryptCEK(m_contentCryptoMaterial);
    
    if (m_cryptoConfig.GetStorageMethod() == StorageMethod::INSTRUCTION_FILE)
    {
        Handlers::InstructionFileHandler handler;
        PutObjectRequest instructionFileRequest;
        instructionFileRequest.WithBucket(copyRequest.GetBucket());
        instructionFileRequest.WithKey(copyRequest.GetKey());
        handler.PopulateRequest(instructionFileRequest, m_contentCryptoMaterial);
        PutObjectOutcome instructionOutcome = m_s3Client.S3Client::PutObject(instructionFileRequest);
        if (!instructionOutcome.IsSuccess())
        {
            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Instruction file put operation not successful: "
                    << instructionOutcome.GetError().GetExceptionName() << " : " 
                    << instructionOutcome.GetError().GetMessage());
            return instructionOutcome;
        }
    }
    else
    {
        Handlers::MetadataHandler handler;
        handler.PopulateRequest(copyRequest, m_contentCryptoMaterial);
    }	
    return WrapAndMakeRequestWithCipher(copyRequest, putObjectFunction);
}

Aws::S3::Model::GetObjectOutcome CryptoModule::GetObjectSecurely(const Aws::S3::Model::GetObjectRequest& request,
   const Aws::S3::Model::HeadObjectResult& headObjectResult, const ContentCryptoMaterial& contentCryptoMaterial, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction)
{
    GetObjectRequest copyRequest(request);

    m_contentCryptoMaterial = contentCryptoMaterial;

    DecryptionConditionCheck(copyRequest.GetRange());
    m_encryptionMaterials->DecryptCEK(m_contentCryptoMaterial);

    CryptoBuffer tagFromBody = GetTag(copyRequest, getObjectFunction);
    InitDecryptionCipher(tagFromBody);
    AdjustRange(copyRequest, headObjectResult);
    
    return UnwrapAndMakeRequestWithCipher(copyRequest, getObjectFunction);
}

const Aws::S3::Model::PutObjectOutcome CryptoModule::WrapAndMakeRequestWithCipher(Aws::S3::Model::PutObjectRequest & request, const std::function < Aws::S3::Model::PutObjectOutcome(const Aws::S3::Model::PutObjectRequest&) >& putObjectFunction)
{
    std::shared_ptr<Aws::IOStream> iostream = request.GetBody();
    request.SetBody(Aws::MakeShared<Aws::Utils::Crypto::SymmetricCryptoStream>(ALLOCATION_TAG, (Aws::IStream&)*iostream, CipherMode::Encrypt, (*m_cipher)));
    iostream->clear();
    iostream->seekg(0, std::ios_base::beg);

    PutObjectOutcome outcome = putObjectFunction(request);
    if (!outcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "S3 put object operation not successful: "
            << outcome.GetError().GetExceptionName() << " : "
            << outcome.GetError().GetMessage());
    }
    return outcome;
}

const Aws::S3::Model::GetObjectOutcome CryptoModule::UnwrapAndMakeRequestWithCipher(Aws::S3::Model::GetObjectRequest& request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction)
{
    auto userSuppliedStreamFactory = request.GetResponseStreamFactory();
    auto userSuppliedStream = userSuppliedStreamFactory();

    request.SetResponseStreamFactory(
        [&] { return Aws::New<SymmetricCryptoStream>(ALLOCATION_TAG, (Aws::OStream&)*userSuppliedStream, CipherMode::Decrypt, *m_cipher); }
    );
    GetObjectOutcome outcome = getObjectFunction(request);
    //GetObjectOutcome outcome = m_s3Client.S3Client::GetObject(request);
    if (!outcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "S3 get operation not successful: "
            << outcome.GetError().GetExceptionName() << " : "
            << outcome.GetError().GetMessage());
        return outcome;
    }

    GetObjectResult&& result = outcome.GetResultWithOwnership();
    ((SymmetricCryptoStream&)result.GetBody()).Finalize();

    userSuppliedStream->clear();
    userSuppliedStream->seekg(0, std::ios_base::beg);
    result.ReplaceBody(userSuppliedStream);

    return outcome;
}




CryptoModuleEO::CryptoModuleEO(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleEO::SetContentLength(Aws::S3::Model::PutObjectRequest & request)
{
    request.GetBody()->seekg(0, std::ios_base::end);
    size_t paddingLength = static_cast<size_t>(request.GetBody()->tellg());
    auto paddingAddition = (paddingLength % AES_BLOCK_SIZE) == 0 ? AES_BLOCK_SIZE : AES_BLOCK_SIZE - paddingLength % AES_BLOCK_SIZE;
    paddingLength += paddingAddition;
    request.SetContentLength(paddingLength);
    request.GetBody()->seekg(0, std::ios_base::beg);
}

void CryptoModuleEO::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
    m_contentCryptoMaterial.SetCryptoTagLength(0u);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::CBC);
}

void CryptoModuleEO::InitEncryptionCipher()
{
    m_cipher = CreateAES_CBCImplementation(m_contentCryptoMaterial.GetContentEncryptionKey());
    m_contentCryptoMaterial.SetIV(m_cipher->GetIV());
}

void CryptoModuleEO::InitDecryptionCipher(const Aws::Utils::CryptoBuffer &)
{
    m_cipher = CreateAES_CBCImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV());
}

Aws::Utils::CryptoBuffer CryptoModuleEO::GetTag(const Aws::S3::Model::GetObjectRequest&, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >&)
{
    return Aws::Utils::CryptoBuffer();
}

void CryptoModuleEO::DecryptionConditionCheck(const Aws::String&)
{
    AWS_LOGSTREAM_WARN(ALLOCATION_TAG, "Decryption using Encryption Only mode is not recommended. Using Authenticated Encryption or Strict Authenticated Encryption is advised.");
}

void CryptoModuleEO::AdjustRange(Aws::S3::Model::GetObjectRequest &, const Aws::S3::Model::HeadObjectResult &)
{
    //no range adjustment needed in Encryption Only Mode.
}




CryptoModuleAE::CryptoModuleAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleAE::SetContentLength(Aws::S3::Model::PutObjectRequest & request)
{
    request.GetBody()->seekg(0, std::ios_base::end);
    size_t paddingLength = static_cast<size_t>(request.GetBody()->tellg());
    //Adding 16 bytes to content length since tag is automatically appended
    paddingLength += TAG_SIZE_BYTES;
    request.SetContentLength(paddingLength);
    request.GetBody()->seekg(0, std::ios_base::beg);
}

void CryptoModuleAE::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
    m_contentCryptoMaterial.SetCryptoTagLength(TAG_SIZE_BYTES * BITS_IN_BYTE);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
}

void CryptoModuleAE::InitEncryptionCipher()
{
    m_cipher = Aws::MakeShared<AES_GCM_AppendedTag>(ALLOCATION_TAG, m_contentCryptoMaterial.GetContentEncryptionKey());
    m_contentCryptoMaterial.SetIV(m_cipher->GetIV());
}

void CryptoModuleAE::InitDecryptionCipher(const Aws::Utils::CryptoBuffer & tag)
{
    m_cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV(), tag);
}

Aws::Utils::CryptoBuffer CryptoModuleAE::GetTag(const Aws::S3::Model::GetObjectRequest & request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction)
{
    GetObjectRequest getTag;
    getTag.WithBucket(request.GetBucket());
    getTag.WithKey(request.GetKey());
    auto tagLengthInBytes = m_contentCryptoMaterial.GetCryptoTagLength() / BITS_IN_BYTE;
    Aws::String tagLengthRangeSpecifier = LAST_BYTES_SPECIFIER + Utils::StringUtils::to_string(tagLengthInBytes);
    getTag.SetRange(tagLengthRangeSpecifier);
    GetObjectOutcome tagOutcome = getObjectFunction(getTag);
    if (!tagOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Get Operation for crypto tag not successful: "
            << tagOutcome.GetError().GetExceptionName() << " : "
            << tagOutcome.GetError().GetMessage());
        return CryptoBuffer();
    }
    Aws::IOStream& tagStream = tagOutcome.GetResult().GetBody();
    Aws::OStringStream ss;
    ss << tagStream.rdbuf();
    return CryptoBuffer((unsigned char*)ss.str().c_str(), ss.str().length());
}

void CryptoModuleAE::DecryptionConditionCheck(const Aws::String&)
{
    //no condition checks needed for decryption in Authenticated Encryption Mode. 
}

void CryptoModuleAE::AdjustRange(Aws::S3::Model::GetObjectRequest & getObjectRequest, const Aws::S3::Model::HeadObjectResult & headObjectResult)
{
    auto adjustedRange = headObjectResult.GetContentLength() - TAG_SIZE_BYTES - 1;
    getObjectRequest.SetRange(FIRST_BYTES_SPECIFIER + Aws::Utils::StringUtils::to_string(adjustedRange));
}




CryptoModuleStrictAE::CryptoModuleStrictAE(const std::shared_ptr<Materials::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig,
    const Aws::S3::S3Client& s3Client) :
    CryptoModule(encryptionMaterials, cryptoConfig, s3Client)
{
}

void CryptoModuleStrictAE::SetContentLength(Aws::S3::Model::PutObjectRequest & request)
{
    request.GetBody()->seekg(0, std::ios_base::end);
    size_t paddingLength = static_cast<size_t>(request.GetBody()->tellg());
    //Adding 16 bytes to content length since tag is automatically appended
    paddingLength += AES_BLOCK_SIZE;
    request.SetContentLength(paddingLength);
    request.GetBody()->seekg(0, std::ios_base::beg);
}

void CryptoModuleStrictAE::PopulateCryptoContentMaterial()
{
    m_contentCryptoMaterial.SetContentEncryptionKey(SymmetricCipher::GenerateKey());
    m_contentCryptoMaterial.SetCryptoTagLength(TAG_SIZE_BYTES * BITS_IN_BYTE);
    m_contentCryptoMaterial.SetContentCryptoScheme(ContentCryptoScheme::GCM);
}

void CryptoModuleStrictAE::InitEncryptionCipher()
{
    m_cipher = Aws::MakeShared<AES_GCM_AppendedTag>(ALLOCATION_TAG, m_contentCryptoMaterial.GetContentEncryptionKey());
    m_contentCryptoMaterial.SetIV(m_cipher->GetIV());
}

void CryptoModuleStrictAE::InitDecryptionCipher(const Aws::Utils::CryptoBuffer & tag)
{
    m_cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV(), tag);
}

Aws::Utils::CryptoBuffer CryptoModuleStrictAE::GetTag(const Aws::S3::Model::GetObjectRequest & request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction)
{
    GetObjectRequest getTag;
    getTag.WithBucket(request.GetBucket());
    getTag.WithKey(request.GetKey());
    auto tagLengthInBytes = m_contentCryptoMaterial.GetCryptoTagLength() / BITS_IN_BYTE;
    Aws::String tagLengthRangeSpecifier = LAST_BYTES_SPECIFIER + Utils::StringUtils::to_string(tagLengthInBytes);
    getTag.SetRange(tagLengthRangeSpecifier);
    GetObjectOutcome tagOutcome = getObjectFunction(getTag);
    Aws::IOStream& tagStream = tagOutcome.GetResult().GetBody();
    Aws::OStringStream ss;
    ss << tagStream.rdbuf();
    return CryptoBuffer((unsigned char*)ss.str().c_str(), ss.str().length());
}

void CryptoModuleStrictAE::DecryptionConditionCheck(const Aws::String& requestRange)
{
    if (!requestRange.empty())
    {
        AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Range-Get Operations are not allowed with Strict Authenticated Encryption mode.")
            assert(0);
    }
    if (m_contentCryptoMaterial.GetContentCryptoScheme() != ContentCryptoScheme::GCM)
    {
        AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Strict Authentication Encryption only allows decryption of GCM encrypted objects.")
            assert(0);
    }
}

void CryptoModuleStrictAE::AdjustRange(Aws::S3::Model::GetObjectRequest & getObjectRequest, const Aws::S3::Model::HeadObjectResult & headObjectResult)
{
    auto adjustedRange = headObjectResult.GetContentLength() - TAG_SIZE_BYTES - 1;
    getObjectRequest.SetRange(FIRST_BYTES_SPECIFIER + Aws::Utils::StringUtils::to_string(adjustedRange));
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
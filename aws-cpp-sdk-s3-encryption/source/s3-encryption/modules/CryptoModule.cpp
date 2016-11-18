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
            static const char* LAST_BYTES_SPECIFIER = "bytes=-";
            static const char* FIRST_BYTES_SPECIFIER = "bytes=0-";
            static const size_t GCM_IV_SIZE = 12u;
            static const size_t TAG_SIZE_BYTES = 16u;
            static const size_t AES_BLOCK_SIZE = 16u;
            static const size_t BITS_IN_BYTE = 8u;

            CryptoModule::CryptoModule(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig) :
                m_encryptionMaterials(encryptionMaterials), m_contentCryptoMaterial(ContentCryptoMaterial()), m_cryptoConfig(cryptoConfig), m_cipher(nullptr)
            {
            }

            Aws::S3::Model::PutObjectOutcome CryptoModule::PutObjectSecurely(const Aws::S3::Model::PutObjectRequest& request, const PutObjectFunction& putObjectFunction)
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
                    PutObjectOutcome instructionOutcome = putObjectFunction(instructionFileRequest);
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
                const Aws::S3::Model::HeadObjectResult& headObjectResult, const ContentCryptoMaterial& contentCryptoMaterial, const GetObjectFunction& getObjectFunction)
            {
                GetObjectRequest copyRequest(request);

                m_contentCryptoMaterial = contentCryptoMaterial;

                DecryptionConditionCheck(copyRequest.GetRange());
                m_encryptionMaterials->DecryptCEK(m_contentCryptoMaterial);

                CryptoBuffer tagFromBody = GetTag(copyRequest, getObjectFunction);
                int64_t rangeStart = 0;
                int64_t rangeEnd = 0;

                if (!request.GetRange().empty())
                {
                    auto range = ParseGetObjectRequestRange(request.GetRange(), headObjectResult.GetContentLength());
                    rangeStart = range.first;
                    rangeEnd = range.second;
                }

                InitDecryptionCipher(rangeStart, rangeEnd, tagFromBody);
                auto newRange = AdjustRange(copyRequest, headObjectResult);

                int16_t firstBlockAdjustment = 0;
                if (rangeStart > 0)
                {
                    //new range will ALWAYS be adjusted downwards or not at all.
                    //For Strict AE, it will not be adjusted at all.
                    firstBlockAdjustment = static_cast<int16_t>(rangeStart - newRange.first);
                }

                return UnwrapAndMakeRequestWithCipher(copyRequest, getObjectFunction, firstBlockAdjustment);
            }

            Aws::S3::Model::PutObjectOutcome CryptoModule::WrapAndMakeRequestWithCipher(Aws::S3::Model::PutObjectRequest & request, const PutObjectFunction& putObjectFunction)
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

            Aws::S3::Model::GetObjectOutcome CryptoModule::UnwrapAndMakeRequestWithCipher(Aws::S3::Model::GetObjectRequest& request, const GetObjectFunction& getObjectFunction, int16_t firstBlockOffset)
            {
                assert(static_cast<size_t>(firstBlockOffset) < AES_BLOCK_SIZE && firstBlockOffset >= 0);
                auto userSuppliedStreamFactory = request.GetResponseStreamFactory();
                auto userSuppliedStream = userSuppliedStreamFactory();

                request.SetResponseStreamFactory(
                    [&] { return Aws::New<SymmetricCryptoStream>(ALLOCATION_TAG, (Aws::OStream&)*userSuppliedStream, CipherMode::Decrypt, *m_cipher, DEFAULT_BUF_SIZE, firstBlockOffset); }
                );
                GetObjectOutcome outcome = getObjectFunction(request);
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

            std::pair<int64_t, int64_t> CryptoModule::ParseGetObjectRequestRange(const Aws::String& range, int64_t contentLength)
            {
                auto iterEquals = range.find("=");
                auto iterDash = range.find("-");
                if (iterEquals == range.npos || iterDash == range.npos)
                {
                    return std::make_pair(0LL, 0LL);
                }
                if (range.substr(0, iterEquals) != "bytes")
                {
                    return std::make_pair(0LL, 0LL);
                }

                Aws::String bytesRange = range.substr(iterEquals + 1);
                uint64_t lowerBound = 0LL;
                uint64_t upperBound = 0LL;
                iterDash = bytesRange.find("-");
                if (iterDash == 0)
                {
                    upperBound = contentLength - 1;
                    lowerBound = contentLength - StringUtils::ConvertToInt64((bytesRange.substr(iterDash + 1).c_str()));
                }
                else if (iterDash == bytesRange.size() - 1)
                {
                    lowerBound = StringUtils::ConvertToInt64((bytesRange.substr(0, iterDash)).c_str());
                    upperBound = contentLength - 1;
                }
                else
                {
                    lowerBound = StringUtils::ConvertToInt64((bytesRange.substr(0, iterDash)).c_str());
                    upperBound = StringUtils::ConvertToInt64((bytesRange.substr(iterDash + 1).c_str()));
                }
                return std::make_pair(lowerBound, upperBound);
            }

            CryptoModuleEO::CryptoModuleEO(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig) :
                CryptoModule(encryptionMaterials, cryptoConfig)
            {
            }

            void CryptoModuleEO::SetContentLength(Aws::S3::Model::PutObjectRequest & request)
            {
                request.GetBody()->seekg(0, std::ios_base::end);
                size_t ciphertextLength = static_cast<size_t>(request.GetBody()->tellg());
                auto cipherTextAddition = (ciphertextLength  % AES_BLOCK_SIZE) == 0 ? AES_BLOCK_SIZE : AES_BLOCK_SIZE - ciphertextLength % AES_BLOCK_SIZE;
                ciphertextLength += cipherTextAddition;
                request.SetContentLength(ciphertextLength);
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

            void CryptoModuleEO::InitDecryptionCipher(int64_t, int64_t, const Aws::Utils::CryptoBuffer &)
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

            std::pair<int64_t, int64_t> CryptoModuleEO::AdjustRange(Aws::S3::Model::GetObjectRequest & request, const Aws::S3::Model::HeadObjectResult & result)
            {
                //we currently do not support range gets for CBC mode. It is possible, but it is complicated.
                //if this is something you need, file a github issue requesting it. We recommend that you use Authenticated Encryption and use range gets there.
                assert(request.GetRange().empty());
                AWS_UNREFERENCED_PARAM(request);
                std::pair<int64_t, int64_t> newRange(0, result.GetContentLength());

                return newRange;
            }


            CryptoModuleAE::CryptoModuleAE(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig) :
                CryptoModule(encryptionMaterials, cryptoConfig)
            {
            }

            void CryptoModuleAE::SetContentLength(Aws::S3::Model::PutObjectRequest & request)
            {
                request.GetBody()->seekg(0, std::ios_base::end);
                size_t cipherTextLength = static_cast<size_t>(request.GetBody()->tellg());
                //Adding 16 bytes to content length since tag is automatically appended
                cipherTextLength += TAG_SIZE_BYTES;
                request.SetContentLength(cipherTextLength);
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

            void CryptoModuleAE::InitDecryptionCipher(int64_t rangeStart, int64_t rangeEnd, const Aws::Utils::CryptoBuffer& tag)
            {
                bool forceCtr;
#ifdef ENABLE_COMMONCRYPTO_ENCRYPTION
                forceCtr = true;
#else
                forceCtr = false;
#endif

                if (rangeStart > 0 || rangeEnd > 0 || forceCtr)
                {
                    AWS_UNREFERENCED_PARAM(GCM_IV_SIZE);
                    //See http://csrc.nist.gov/publications/nistpubs/800-38D/SP-800-38D.pdf for decrypting a GCM message using CTR mode.
                    assert(m_contentCryptoMaterial.GetIV().GetLength() == GCM_IV_SIZE);
                    CryptoBuffer counter(4);
                    counter.Zero();
                    //start at 0x01, but that is for the Hash, this message should begin at 0x02
                    counter[3] = 0x02;
                    CryptoBuffer gcmToCtrIv({ (ByteBuffer*)&m_contentCryptoMaterial.GetIV(), (ByteBuffer*)&counter });
                    m_cipher = CreateAES_CTRImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(),
                        IncrementCTRCounter(gcmToCtrIv, static_cast<int32_t>(rangeStart / static_cast<int64_t>(AES_BLOCK_SIZE))));
                }
                else
                {
                    m_cipher = CreateAES_GCMImplementation(m_contentCryptoMaterial.GetContentEncryptionKey(), m_contentCryptoMaterial.GetIV(), tag);
                }
            }

            Aws::Utils::CryptoBuffer CryptoModuleAE::GetTag(const Aws::S3::Model::GetObjectRequest& request, const std::function < Aws::S3::Model::GetObjectOutcome(const Aws::S3::Model::GetObjectRequest&) >& getObjectFunction)
            {
                if (request.GetRange().empty())
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
                else
                {
                    AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Not retrieving tag, because we don't need it for ranged gets.");
                    return CryptoBuffer();
                }
            }

            void CryptoModuleAE::DecryptionConditionCheck(const Aws::String&)
            {
                //no condition checks needed for decryption in Authenticated Encryption Mode. 
            }

            std::pair<int64_t, int64_t> CryptoModuleAE::AdjustRange(Aws::S3::Model::GetObjectRequest& getObjectRequest, const Aws::S3::Model::HeadObjectResult& headObjectResult)
            {
                Aws::StringStream ss;
                ss << "bytes=";

                std::pair<int64_t, int64_t> newRange(0, headObjectResult.GetContentLength());

                //if we have a range specified, we need to honor it, but we will be using CTR mode for decryption. We need to move the range to the beginning of a block.
                //also we need to trim off the GCM tag since we don't care about it as part of the decrypted output.
                if (!getObjectRequest.GetRange().empty())
                {
                    auto range = ParseGetObjectRequestRange(getObjectRequest.GetRange(), headObjectResult.GetContentLength());
                    auto adjustedFirstByte = range.first - (range.first % 16);
                    auto adjustedLastByte = range.second;

                    if (range.second >= static_cast<int64_t>(headObjectResult.GetContentLength() - TAG_SIZE_BYTES - 1))
                    {
                        adjustedLastByte = headObjectResult.GetContentLength() - TAG_SIZE_BYTES - 1;
                    }

                    newRange = std::pair<int64_t, int64_t>(adjustedFirstByte, adjustedLastByte);

                    ss << adjustedFirstByte << "-" << adjustedLastByte;
                    AWS_LOGSTREAM_INFO(ALLOCATION_TAG, "Range was specified for AE mode, we need to adjust it to fit block alignment. New Range is " << ss.str());
                }
                else
                {
                    auto adjustedRange = headObjectResult.GetContentLength() - TAG_SIZE_BYTES - 1;
                    ss << "0-" << adjustedRange;
                    newRange = std::pair<int64_t, int64_t>(0, adjustedRange);
                    AWS_LOGSTREAM_DEBUG(ALLOCATION_TAG, "Range was not specified for AE mode, we need to trim away the tag. New Range is " << ss.str());
                }

                getObjectRequest.SetRange(ss.str());
                return newRange;
            }




            CryptoModuleStrictAE::CryptoModuleStrictAE(const std::shared_ptr<EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration & cryptoConfig) :
                CryptoModule(encryptionMaterials, cryptoConfig)
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

            void CryptoModuleStrictAE::InitDecryptionCipher(int64_t rangeStart, int64_t rangeEnd, const Aws::Utils::CryptoBuffer & tag)
            {
                //range gets not allowed in Strict AE.
                assert(rangeStart == 0);
                assert(rangeEnd == 0);
                AWS_UNREFERENCED_PARAM(rangeStart);
                AWS_UNREFERENCED_PARAM(rangeEnd);
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

            std::pair<int64_t, int64_t> CryptoModuleStrictAE::AdjustRange(Aws::S3::Model::GetObjectRequest & getObjectRequest, const Aws::S3::Model::HeadObjectResult & headObjectResult)
            {
                auto adjustedRange = headObjectResult.GetContentLength() - TAG_SIZE_BYTES - 1;
                getObjectRequest.SetRange(FIRST_BYTES_SPECIFIER + Aws::Utils::StringUtils::to_string(adjustedRange));
                return std::pair<int64_t, int64_t>(0, adjustedRange);
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
                return CryptoBuffer({ (ByteBuffer*)&finalizeBuffer, (ByteBuffer*)&m_tag });
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

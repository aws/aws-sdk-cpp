/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::Client;
using namespace Aws::S3Encryption;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            static const char* const ALLOCATION_TAG = "SimpleEncryptionMaterials";

            SimpleEncryptionMaterialsBase::SimpleEncryptionMaterialsBase(const Aws::Utils::CryptoBuffer& symmetricKey) :
                m_symmetricMasterKey(symmetricKey)
            {
            }

            std::shared_ptr<SymmetricCipher> SimpleEncryptionMaterialsBase::CreateCipher(ContentCryptoMaterial&, bool) const 
            {
                return CreateAES_KeyWrapImplementation(m_symmetricMasterKey);
            }

            KeyWrapAlgorithm SimpleEncryptionMaterialsBase::GetKeyWrapAlgorithm() const
            {
                return KeyWrapAlgorithm::AES_KEY_WRAP;
            }

            CryptoOutcome SimpleEncryptionMaterialsBase::EncryptCEK(ContentCryptoMaterial& contentCryptoMaterial)
            {
                auto cipher = CreateCipher(contentCryptoMaterial, true/*encrypt*/);
                if (cipher == nullptr)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The cipher was not initialized correctly during encryption.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Failed to encrypt content encryption key(CEK)", false/*not retryable*/));
                }
                contentCryptoMaterial.SetKeyWrapAlgorithm(GetKeyWrapAlgorithm());
                const CryptoBuffer& contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
                CryptoBuffer&& encryptResult = cipher->EncryptBuffer(contentEncryptionKey);
                CryptoBuffer&& encryptFinalizeResult = cipher->FinalizeEncryption();
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer({ &encryptResult, &encryptFinalizeResult }));
                contentCryptoMaterial.SetCEKGCMTag(cipher->GetTag());
                return CryptoOutcome(Aws::NoResult());
            }

            CryptoOutcome SimpleEncryptionMaterialsBase::DecryptCEK(ContentCryptoMaterial& contentCryptoMaterial)
            {
                auto errorOutcome = CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::DECRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "DecryptContentEncryptionKeyFailed", "Failed to decrypt content encryption key(CEK)", false/*not retryable*/));

                if (contentCryptoMaterial.GetKeyWrapAlgorithm() != GetKeyWrapAlgorithm())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The KeyWrapAlgorithm set in contentCryptoMaterial is not mached to the concrete key wrap algorithem during decryption, therefore the"
                        << " current encryption materials can not decrypt the content encryption key.");
                    return errorOutcome;
                }
                auto cipher = CreateCipher(contentCryptoMaterial, false/*decrypt*/);
                if (cipher == nullptr)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The cipher was not initialized correctly during decryption.");
                    return errorOutcome;
                }
                const CryptoBuffer& encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
                CryptoBuffer&& decryptResult = cipher->DecryptBuffer(encryptedContentEncryptionKey);
                CryptoBuffer&& decryptFinalizeResult = cipher->FinalizeDecryption();
                CryptoBuffer decryptedBuffer = CryptoBuffer({ &decryptResult, &decryptFinalizeResult });
                contentCryptoMaterial.SetContentEncryptionKey(decryptedBuffer);
                if (contentCryptoMaterial.GetContentEncryptionKey().GetLength() == 0u)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Content Encryption Key could not be decrypted.");
                    return errorOutcome;
                }
                return CryptoOutcome(Aws::NoResult());
            }

            std::shared_ptr<SymmetricCipher> SimpleEncryptionMaterialsWithGCMAAD::CreateCipher(ContentCryptoMaterial& contentCryptoMaterial, bool encrypt) const 
            {
                if (encrypt)
                {
                    auto cipher = CreateAES_GCMImplementation(m_symmetricMasterKey, &(contentCryptoMaterial.GetGCMAAD()));
                    contentCryptoMaterial.SetCekIV(cipher->GetIV());
                    return cipher;
                }
                else
                {
                    return CreateAES_GCMImplementation(m_symmetricMasterKey, contentCryptoMaterial.GetCekIV(), contentCryptoMaterial.GetCEKGCMTag(), contentCryptoMaterial.GetGCMAAD());
                }
            }

            KeyWrapAlgorithm SimpleEncryptionMaterialsWithGCMAAD::GetKeyWrapAlgorithm() const
            {
                return KeyWrapAlgorithm::AES_GCM;
            }

        } //namespace Materials
    } //namespace S3Encryption
} //namespace Aws

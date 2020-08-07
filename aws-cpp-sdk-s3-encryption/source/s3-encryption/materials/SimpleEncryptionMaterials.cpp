/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/s3-encryption/handlers/DataHandler.h>
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
                if (m_symmetricMasterKey.GetLength() != AES_GCM_KEY_BYTES)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Expected symmetric key's length should be: " << AES_GCM_KEY_BYTES << " provided: " << m_symmetricMasterKey.GetLength());
                }
            }

            std::shared_ptr<SymmetricCipher> SimpleEncryptionMaterialsBase::CreateCipher(ContentCryptoMaterial& contentCryptoMaterial, bool encrypt) const
            {
                switch (contentCryptoMaterial.GetKeyWrapAlgorithm())
                {
                    case KeyWrapAlgorithm::AES_GCM:
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

                    case KeyWrapAlgorithm::AES_KEY_WRAP:
                    {
                        return CreateAES_KeyWrapImplementation(m_symmetricMasterKey);
                    }

                    default:
                        break;
                }
                return nullptr;
            }

            KeyWrapAlgorithm SimpleEncryptionMaterialsBase::GetKeyWrapAlgorithm() const
            {
                return KeyWrapAlgorithm::AES_KEY_WRAP;
            }

            CryptoOutcome SimpleEncryptionMaterialsBase::EncryptCEK(ContentCryptoMaterial& contentCryptoMaterial)
            {
                // non empty context map passed in.
                if (!contentCryptoMaterial.GetMaterialsDescription().empty())
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Customized encryption context map is not allowed for AES/GCM Key wrap algorithm.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Customized encryption context map is not allowed for AES/GCM Key wrap algorithm.", false/*not retryable*/));
                }

                contentCryptoMaterial.SetKeyWrapAlgorithm(GetKeyWrapAlgorithm());
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
                if (!(*cipher))
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Cipher internal error, failed to encrypt the Content Encryption Key.");
                    return CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "EncryptContentEncryptionKeyFailed", "Failed to encrypt the Content Encryption Key", false/*not retryable*/));
                }
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer({ &encryptResult, &encryptFinalizeResult }));
                contentCryptoMaterial.SetCEKGCMTag(cipher->GetTag());

                if (contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_GCM)
                {
                    CryptoBuffer iv = contentCryptoMaterial.GetCekIV();
                    CryptoBuffer key = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
                    CryptoBuffer tag = contentCryptoMaterial.GetCEKGCMTag();
                    contentCryptoMaterial.SetFinalCEK(CryptoBuffer({ &iv, &key, &tag }));
                }
                else
                {
                    contentCryptoMaterial.SetFinalCEK(contentCryptoMaterial.GetEncryptedContentEncryptionKey());
                }

                return CryptoOutcome(Aws::NoResult());
            }

            CryptoOutcome SimpleEncryptionMaterialsBase::DecryptCEK(ContentCryptoMaterial& contentCryptoMaterial)
            {
                auto errorOutcome = CryptoOutcome(AWSError<CryptoErrors>(CryptoErrors::DECRYPT_CONTENT_ENCRYPTION_KEY_FAILED, "DecryptContentEncryptionKeyFailed", "Failed to decrypt content encryption key(CEK)", false/*not retryable*/));

                if (contentCryptoMaterial.GetFinalCEK().GetLength())
                {
                    const auto& finalCEK = contentCryptoMaterial.GetFinalCEK();
                    if (contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_GCM)
                    {
                        size_t expectedLength = AES_GCM_IV_BYTES + AES_GCM_KEY_BYTES + AES_GCM_TAG_BYTES;
                        if (contentCryptoMaterial.GetFinalCEK().GetLength() != expectedLength)
                        {
                            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "S3 Encryption Client get unexpected AES GCM key wrap final CEK length: " << finalCEK.GetLength() << " expected: " << expectedLength);
                            return errorOutcome;
                        }
                        contentCryptoMaterial.SetCekIV(CryptoBuffer(finalCEK.GetUnderlyingData(), AES_GCM_IV_BYTES));
                        contentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer(finalCEK.GetUnderlyingData() + AES_GCM_IV_BYTES, AES_GCM_KEY_BYTES));
                        contentCryptoMaterial.SetCEKGCMTag(CryptoBuffer(finalCEK.GetUnderlyingData() + AES_GCM_IV_BYTES + AES_GCM_KEY_BYTES, AES_GCM_TAG_BYTES));
                    }
                    else
                    {
                        if (contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_KEY_WRAP && finalCEK.GetLength() != AES_KEY_WRAP_ENCRYPTED_CEK_BYTES)
                        {
                            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "S3 Encryption Client get unexpected AES Key Wrap final CEK length: " << finalCEK.GetLength() << " expected: " << AES_KEY_WRAP_ENCRYPTED_CEK_BYTES);
                            return errorOutcome;
                        }
                        contentCryptoMaterial.SetEncryptedContentEncryptionKey(finalCEK);
                        contentCryptoMaterial.SetCEKGCMTag(CryptoBuffer());
                    }
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
                if (!(*cipher) || contentCryptoMaterial.GetContentEncryptionKey().GetLength() == 0u)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Content Encryption Key could not be decrypted.");
                    return errorOutcome;
                }
                return CryptoOutcome(Aws::NoResult());
            }

            KeyWrapAlgorithm SimpleEncryptionMaterialsWithGCMAAD::GetKeyWrapAlgorithm() const
            {
                return KeyWrapAlgorithm::AES_GCM;
            }

        } //namespace Materials
    } //namespace S3Encryption
} //namespace Aws

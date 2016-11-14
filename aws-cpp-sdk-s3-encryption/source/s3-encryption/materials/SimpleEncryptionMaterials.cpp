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
#include <aws/s3-encryption/materials/SimpleEncryptionMaterials.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;
using namespace Aws::S3Encryption;

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            static const char* const ALLOCATION_TAG = "SimpleEncryptionMaterials";

            SimpleEncryptionMaterials::SimpleEncryptionMaterials(const Aws::Utils::CryptoBuffer & symmetricKey) :
                m_symmetricMasterKey(symmetricKey)
            {
            }

            void SimpleEncryptionMaterials::EncryptCEK(ContentCryptoMaterial & contentCryptoMaterial)
            {
                auto cipher = CreateAES_KeyWrapImplementation(m_symmetricMasterKey);
                if (cipher == nullptr)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The cipher was not initialized correctly during encryption.");
                    return;
                }
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
                const CryptoBuffer& contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
                CryptoBuffer&& encryptResult = cipher->EncryptBuffer(contentEncryptionKey);
                CryptoBuffer&& encryptFinalizeResult = cipher->FinalizeEncryption();
                contentCryptoMaterial.SetEncryptedContentEncryptionKey(CryptoBuffer({ &encryptResult, &encryptFinalizeResult }));
            }

            void SimpleEncryptionMaterials::DecryptCEK(ContentCryptoMaterial & contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::AES_KEY_WRAP)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The KeyWrapAlgorithm is not AES_Key_Wrap during decryption, therefore the"
                        << " current encryption materials can not decrypt the content encryption key.");
                    return;
                }
                auto cipher = CreateAES_KeyWrapImplementation(m_symmetricMasterKey);
                if (cipher == nullptr)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "The cipher was not initialized correctly during decryption.");
                    return;
                }
                const CryptoBuffer& encryptedContentEncryptionKey = contentCryptoMaterial.GetEncryptedContentEncryptionKey();
                CryptoBuffer&& decryptResult = cipher->DecryptBuffer(encryptedContentEncryptionKey);
                CryptoBuffer&& decryptFinalizeResult = cipher->FinalizeDecryption();
                CryptoBuffer decryptedBuffer = CryptoBuffer({ &decryptResult, &decryptFinalizeResult });
                contentCryptoMaterial.SetContentEncryptionKey(decryptedBuffer);
                if (contentCryptoMaterial.GetContentEncryptionKey().GetLength() == 0u)
                {
                    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Content Encryption Key could not be decrypted.");
                }
            }

        } //namespace Materials
    } //namespace S3Encryption
} //namespace Aws
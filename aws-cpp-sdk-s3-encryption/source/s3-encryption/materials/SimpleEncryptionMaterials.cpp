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
            SimpleEncryptionMaterials::SimpleEncryptionMaterials(const Aws::Utils::CryptoBuffer & symmetricKey) :
                m_symmetricKey(symmetricKey)
            {
            }

            void SimpleEncryptionMaterials::EncryptCEK(Aws::S3Encryption::ContentCryptoMaterial & contentCryptoMaterial)
            {
                auto cipher = CreateAES_KeyWrapImplementation(m_symmetricKey);
                contentCryptoMaterial.SetKeyWrapAlgorithm(KeyWrapAlgorithm::AES_KEY_WRAP);
                auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
                auto encryptResult = cipher->EncryptBuffer(contentEncryptionKey);
                auto encryptFinalizeResult = cipher->FinalizeEncryption();
                contentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer({ &encryptResult, &encryptFinalizeResult }));
            }

            void SimpleEncryptionMaterials::DecryptCEK(Aws::S3Encryption::ContentCryptoMaterial & contentCryptoMaterial)
            {
                if (contentCryptoMaterial.GetKeyWrapAlgorithm() != KeyWrapAlgorithm::AES_KEY_WRAP)
                {
                    AWS_LOGSTREAM_FATAL(SimpleEncryptionMaterials_Tag, "KeyWrapAlgorithm not AES_KEY_WRAP.");
                }
                auto cipher = CreateAES_KeyWrapImplementation(m_symmetricKey);
                auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
                auto decryptResult = cipher->DecryptBuffer(contentEncryptionKey);
                auto decryptFinalizeResult = cipher->FinalizeDecryption();
                contentCryptoMaterial.SetContentEncryptionKey(CryptoBuffer({ &decryptResult, &decryptFinalizeResult }));
            }
        } //namespace Materials
    } //namespace S3Encryption
} //namespace Aws
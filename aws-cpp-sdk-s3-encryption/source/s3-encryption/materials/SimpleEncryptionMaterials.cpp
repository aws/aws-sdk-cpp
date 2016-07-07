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
                //if key wrap uses IV, take from cipher and store here within this class.
                if (cipher)
                {
                    auto contentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
                    //encrypt here
                    contentCryptoMaterial.SetContentEncryptionKey(contentEncryptionKey);
                }
                else
                {
                    //for testing purposes
                    auto contentEncryptionKey = CryptoBuffer();
                    contentCryptoMaterial.SetContentEncryptionKey(contentEncryptionKey);
                }
            }

            void SimpleEncryptionMaterials::DecryptCEK(Aws::S3Encryption::ContentCryptoMaterial & contentCryptoMaterial)
            {
                auto cipher = CreateAES_KeyWrapImplementation(m_symmetricKey);
                //if key wrap uses IV, create cipher from key and iv instead.
                if (cipher && contentCryptoMaterial.GetKeyWrapAlgorithm() == KeyWrapAlgorithm::AES_KEY_WRAP)
                {
                    auto encryptedContentEncryptionKey = contentCryptoMaterial.GetContentEncryptionKey();
                    //decrypt here
                    contentCryptoMaterial.SetContentEncryptionKey(encryptedContentEncryptionKey);
                }
                else
                {
                    //for testing purposes
                    auto encryptedContentEncryptionKey = CryptoBuffer();
                    contentCryptoMaterial.SetContentEncryptionKey(encryptedContentEncryptionKey);
                }
            }
        } //namespace Materials
    } //namespace S3Encryption
} //namespace Aws
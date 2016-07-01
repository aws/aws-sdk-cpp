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
#pragma once

#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/CryptoBuf.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Materials
        {
            class AWS_S3ENCRYPTION_API EncryptionMaterials
            {
            public:
                /**
                * Initialize with key, iv, and tag.
                */
                EncryptionMaterials(const Aws::Utils::CryptoBuffer& key, const Aws::Utils::CryptoBuffer& iv = 0, const Aws::Utils::CryptoBuffer& tag = 0);

                /**
                * Key used as master key for encryption/decryption of the content encryption key.
                */
                inline const Aws::Utils::CryptoBuffer& GetKey() const { return m_key; }

                /**
                * IV used for encryption/decryption
                */
                inline const Aws::Utils::CryptoBuffer& GetIV() const { return m_iv; }

                /**
                * Tag used for encryption/decryption for authenticated encryption mode (GCM).
                */
                inline const Aws::Utils::CryptoBuffer& GetTag() const { return m_tag; }

            private:
                Aws::Utils::CryptoBuffer m_key;
                Aws::Utils::CryptoBuffer m_iv;
                Aws::Utils::CryptoBuffer m_tag;
            };

            class AWS_S3ENCRYPTION_API EncryptionMaterialsProvider
            {
            public:
                virtual ~EncryptionMaterialsProvider() = default;
                /*
                * Override this method to control how encryption materials are fetched.
                */
                virtual const EncryptionMaterials FetchEncryptionMaterials() = 0;

                /*
                * Override this method to encrypt the content key with the encryption materials.
                */
                virtual Aws::Utils::CryptoBuffer EncryptCEK(Utils::CryptoBuffer contentKey) = 0;

                /*
                * Override this method to decrypt the content key with the encryption materials.
                */
                virtual Aws::Utils::CryptoBuffer DecryptCEK(Utils::CryptoBuffer contentKey) = 0;
            };
        }//namespace Materials
    }//namespace S3Encryption
}//namespace Aws

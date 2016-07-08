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
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/crypto/CryptoBuf.h>

namespace Aws
{
    namespace S3Encryption
    {
        enum class ContentCryptoScheme 
        {
            CBC,
            CTR,
            GCM
        };

        enum class KeyWrapAlgorithm 
        {
            KMS,
            AES_KEY_WRAP
        };

        class AWS_S3ENCRYPTION_API ContentCryptoMaterial
        {
        public:
            /*
            Initialize content crypto material with content crypto scheme. Constructor will also generate the cek automatically.
            Since the creation of the crypto content material will be within the S3 crypto modules, only the crypto scheme is needed for initialization.
            The rest of the data will be set using the accessors below.
            */
            ContentCryptoMaterial(const ContentCryptoScheme& contentCryptoScheme);

            /*
            Intialize with content encryption key (cek) and content crypto scheme.
            */
            ContentCryptoMaterial(const Aws::Utils::CryptoBuffer& cek, const ContentCryptoScheme& contentCryptoScheme);

            /**
            * Gets the underlying content encryption key. Not returning const since the key will be encrypted/decrypted in place.
            */
            inline const Aws::Utils::CryptoBuffer& GetContentEncryptionKey()
            {
                return m_contentEncryptionKey;
            }

            /**
            * Gets the underlying initialization vector
            */
            inline const Aws::Utils::CryptoBuffer& GetIV() 
            {
                return m_iv;
            }

            /**
            * Gets the underlying crypto tag length
            */
            inline const size_t& GetCryptoTagLength() 
            {
                return m_cryptoTagLength;
            }

            /**
            * Gets the underlying materials description map.
            */
            inline const Aws::Map<Aws::String, Aws::String>& GetMaterialsDescription() 
            {
                return m_materialsDescription;
            }

            /*
            * Gets the value of the key in the current materials description map.
            */
            inline const Aws::String& GetMaterialsDescription(const Aws::String& key)
            {
                return m_materialsDescription[key];
            }

            /**
            * Gets the underlying key wrap algorithm
            */
            inline const KeyWrapAlgorithm& GetKeyWrapAlgorithm() 
            {
                return m_keyWrapAlgorithm;
            }

            /**
            * Gets the underlying content crypto scheme.
            */
            inline const ContentCryptoScheme& GetContentCryptoScheme() 
            {
                return m_contentCryptoScheme;
            }

            /**
            * Sets the underlying content encryption key. Copies from parameter content encryption key.
            */
            inline void SetContentEncryptionKey(const Aws::Utils::CryptoBuffer& contentEncryptionKey) 
            {
                m_contentEncryptionKey = contentEncryptionKey;
            }

            /**
            * Sets the underlying iv. Copies from parameter iv.
            */
            inline void SetIV(const Aws::Utils::CryptoBuffer& iv) 
            {
                m_iv = iv;
            }

            /**
            * Sets the underlying crypto Tag Length. Copies from parameter cryptoTagLength.
            */
            inline void SetCryptoTagLength(const size_t& cryptoTagLength) 
            {
                m_cryptoTagLength = cryptoTagLength;
            }

            /**
            * Adds to the current materials description map using a key and a value.
            */
            inline void AddMaterialsDescription(const Aws::String& key, const Aws::String& value) 
            {
                m_materialsDescription[key] = value;
            }

            /**
            * Sets the underlying Key Wrap Algorithm. Copies from parameter keyWrapAlgorithm.
            */
            inline void SetKeyWrapAlgorithm(const KeyWrapAlgorithm& keyWrapAlgorithm) 
            {
                m_keyWrapAlgorithm = keyWrapAlgorithm;
            }

            /**
            * Sets the underlying content Crypto Scheme. Copies from parameter contentCryptoScheme.
            */
            inline void SetContentCryptoScheme(const ContentCryptoScheme& contentCryptoScheme)
            {
                m_contentCryptoScheme = contentCryptoScheme;
            }

        private:
            Aws::Utils::CryptoBuffer m_contentEncryptionKey;
            Aws::Utils::CryptoBuffer m_iv;
            size_t m_cryptoTagLength;
            Aws::Map<Aws::String, Aws::String> m_materialsDescription;
            KeyWrapAlgorithm m_keyWrapAlgorithm;
            ContentCryptoScheme m_contentCryptoScheme;
        };
    }
}
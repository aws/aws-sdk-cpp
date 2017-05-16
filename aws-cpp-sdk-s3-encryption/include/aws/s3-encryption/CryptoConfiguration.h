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
#pragma once

#include <aws/s3-encryption/s3Encryption_EXPORTS.h>

namespace Aws
{
    namespace S3Encryption
    {
        enum class StorageMethod
        {
            METADATA,
            INSTRUCTION_FILE
        };

        enum class CryptoMode
        {
            ENCRYPTION_ONLY,
            AUTHENTICATED_ENCRYPTION,
            STRICT_AUTHENTICATED_ENCRYPTION
        };

        class AWS_S3ENCRYPTION_API CryptoConfiguration
        {
        public:
            /*
            * Default constructor.
            */
            CryptoConfiguration();

            /*
            * Constructor that accepts a storage method and defaults the cryptoMode to authenticated encryption.
            */
            CryptoConfiguration(StorageMethod storageMethod);

            /*
            * Constructor that accepts a crypto mode and defaults the storage method to metadata.
            */
            CryptoConfiguration(CryptoMode cryptoMode);

            /*
            * Constructor that accepts storage method and crypto mode. Default storage method is metadata and default crypto mode is authenticated encryption.
            */
            CryptoConfiguration(StorageMethod storageMode, CryptoMode cryptoMode);

            /**
            * Gets the underlying storage mode.
            */
            inline StorageMethod GetStorageMethod() const
            {
                return m_storageMethod;
            }

            /**
            * Gets the underlying crypto mode.
            */
            inline CryptoMode GetCryptoMode() const
            {
                return m_cryptoMode;
            }

            /**
            * Sets the underlying storage method. Copies from parameter storageMethod.
            */
            inline void SetStorageMethod(StorageMethod storageMethod)
            {
                m_storageMethod = storageMethod;
            }

            /**
            * Sets the underlying cryptoMode. Copies from parameter cryptoMode
            */
            inline void SetCryptoMode(CryptoMode cryptoMode)
            {
                m_cryptoMode = cryptoMode;
            }

        private:
            StorageMethod m_storageMethod;
            CryptoMode m_cryptoMode;
        };
    }
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-encryption/CryptoConfiguration.h>

namespace Aws
{
    namespace S3Encryption
    {

        CryptoConfiguration::CryptoConfiguration() :
            m_storageMethod(StorageMethod::METADATA), m_cryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION)
        {
        }

        CryptoConfiguration::CryptoConfiguration(StorageMethod storageMethod) :
            m_storageMethod(storageMethod), m_cryptoMode(CryptoMode::AUTHENTICATED_ENCRYPTION)
        {
        }

        CryptoConfiguration::CryptoConfiguration(CryptoMode cryptoMode) :
            m_storageMethod(StorageMethod::METADATA), m_cryptoMode(cryptoMode)
        {
        }

        CryptoConfiguration::CryptoConfiguration(StorageMethod storageMode, CryptoMode cryptoMode) :
            m_storageMethod(storageMode), m_cryptoMode(cryptoMode)
        {
        }

    }
}
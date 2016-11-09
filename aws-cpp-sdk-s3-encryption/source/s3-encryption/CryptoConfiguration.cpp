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
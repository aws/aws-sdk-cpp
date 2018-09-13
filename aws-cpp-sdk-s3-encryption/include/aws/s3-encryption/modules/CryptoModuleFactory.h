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

#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/utils/crypto/EncryptionMaterials.h>
#include <aws/s3-encryption/s3Encryption_EXPORTS.h>
#include <aws/s3-encryption/CryptoConfiguration.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Modules
        {
            class CryptoModule;
            /*
            * This class is an abstract class for the crypto module factories.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleAbstractFactory
            {
            public:
                virtual ~CryptoModuleAbstractFactory() = default;

                /*
                * Override this method to create a specific crypto module.
                */
                virtual std::shared_ptr<CryptoModule> CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig) = 0;

                /*
                * Returns the crypto mode each sub class handles.
                */
                virtual CryptoMode HandlesMode() const = 0;
            };

            /*
            * This class will be responsible for the functionality for fetching a crypto module using the map of crypto
            * module factories. It will take parameters, crypto configuration, encryption materials, and credentials provider in
            * or to create an appropriate crypto module.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactory
            {
            public:
                /*
                * Default Constructor. Populates map with Crypto Modules Factories and their CryptoModes.
                */
                CryptoModuleFactory();

                /*
                * Determines which module to use and returns a specific factory for that module.
                */
                std::shared_ptr<CryptoModule> FetchCryptoModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig) const;

            private:
                Aws::Map<Aws::S3Encryption::CryptoMode, std::shared_ptr<CryptoModuleAbstractFactory>> m_cryptoFactories;
            };

            /*
            * This class is repsonsible for creating or returning an existing encryption only crypto module.
            * This module will be created with the encryption materials, crypto configuration, and AWS credentials
            * provider.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactoryEO : public CryptoModuleAbstractFactory
            {
            public:
                /*
                * Default Constructor.
                */
                CryptoModuleFactoryEO();

                /*
                * Creates a encryption only crypto module or returns an existing one using
                * the encryption materials, crypto configuration, and AWS credentials provider.
                */
                std::shared_ptr<CryptoModule> CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig) override;

                CryptoMode HandlesMode() const override;
            };

            /*
            * This class is repsonsible for creating or returning an existing authenticated encryption crypto module.
            * This module will be created with the encryption materials, crypto configuration, and AWS credntials
            * provider.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactoryAE : public CryptoModuleAbstractFactory
            {
            public:
                /*
                * Default Constructor.
                */
                CryptoModuleFactoryAE();

                /*
                * Creates a authenticated encryption crypto module or returns an existing one using
                * the encryption materials, crypto configuration, and AWS credentials provider.
                */
                std::shared_ptr<CryptoModule> CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig) override;

                CryptoMode HandlesMode() const override;
            };

            /*
            * This class is repsonsible for creating or returning an existing strict authenticated encryption crypto module.
            * This module will be created with the encryption materials, crypto configuration, and AWS credntials
            * provider.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactoryStrictAE : public CryptoModuleAbstractFactory
            {
            public:
                /*
                * Default Constructor.
                */
                CryptoModuleFactoryStrictAE();

                /*
                * Creates a strict authenticated encryption crypto module or returns an existing one using
                * the encryption materials, crypto configuration, and AWS credentials provider.
                */
                std::shared_ptr<CryptoModule> CreateModule(const std::shared_ptr<Aws::Utils::Crypto::EncryptionMaterials>& encryptionMaterials, const CryptoConfiguration& cryptoConfig) override;

                CryptoMode HandlesMode() const override;
            };
        }
    }
}

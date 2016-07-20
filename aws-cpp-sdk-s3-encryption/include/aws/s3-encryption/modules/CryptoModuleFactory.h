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
#include <aws/s3-encryption/CryptoConfiguration.h>
#include <aws/s3-encryption/materials/EncryptionMaterials.h>
#include <aws/s3-encryption/modules/CryptoModule.h>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>

namespace Aws
{
    namespace S3Encryption
    {
        namespace Modules
        {
            /*
            * This class is an abstract class for the crypto module factories. 
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactory
            {
            public:
                static std::shared_ptr<CryptoModuleFactory> FetchFactory(CryptoMode cryptoMode);

                /*
                * Override this method to create a specific crypto module.
                */
                virtual std::shared_ptr<CryptoModule> CreateModule() = 0;
            private:
                //typedef Aws::Map<Aws::S3Encryption::CryptoMode, std::shared_ptr<CryptoModuleFactory>> FactoryMap;
                static Aws::Map<Aws::S3Encryption::CryptoMode, std::shared_ptr<CryptoModuleFactory>> m_cryptoFactories;
            };

            /*
            * This class is repsonsible for creating or returning an existing encryption only crypto module.
            * This module will be created with the encryption materials, crypto configuration, and AWS credntials
            * provider.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactoryEO : public CryptoModuleFactory
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
                std::shared_ptr<CryptoModule> CreateModule() override;

            private:
                std::shared_ptr<CryptoModuleEO> m_cryptoModuleEO;
            };

            /*
            * This class is repsonsible for creating or returning an existing authenticated encryption crypto module.
            * This module will be created with the encryption materials, crypto configuration, and AWS credntials
            * provider.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactoryAE : public CryptoModuleFactory
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
                std::shared_ptr<CryptoModule> CreateModule() override;

            private:
                std::shared_ptr<CryptoModuleAE> m_cryptoModuleAE;
            };

            /*
            * This class is repsonsible for creating or returning an existing strict authenticated encryption crypto module.
            * This module will be created with the encryption materials, crypto configuration, and AWS credntials
            * provider.
            */
            class AWS_S3ENCRYPTION_API CryptoModuleFactoryStrictAE : public CryptoModuleFactory
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
                std::shared_ptr<CryptoModule> CreateModule() override;

            private:
                std::shared_ptr<CryptoModuleStrictAE> m_cryptoModuleStrictAE;
            };
        }
    }
}

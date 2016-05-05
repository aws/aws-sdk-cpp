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

#include <aws/core/utils/logging/LogLevel.h>
#include <aws/core/utils/logging/LogSystemInterface.h>
#include <aws/core/utils/memory/MemorySystemInterface.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/Core_EXPORTS.h>

namespace Aws
{
    /**
     * SDK wide options for logging
     */
    struct LoggingOptions
    {
        LoggingOptions() : logLevel(Aws::Utils::Logging::LogLevel::Off), defaultLogPrefix("aws_sdk_"), logger(nullptr)
        { }

        /**
         * Defaults to Off, if this is set to something else, then logging will be turned on and logLevel will be passed to the logger
         */
        Aws::Utils::Logging::LogLevel logLevel;

        /**
         * Defaults to aws_sdk_. This will only be used if the default logger is used.
         */
        const char *defaultLogPrefix;

        /**
         * Defaults to nullptr, if logLevel has been set and this field is empty, then the default log interface will be used.
         */
        std::shared_ptr<Aws::Utils::Logging::LogSystemInterface> logger;
    };

    /**
     * SDK wide options for memory management
     */
    struct MemoryManagementOptions
    {
        MemoryManagementOptions() : memoryManager(nullptr)
        { }

        /**
         * Defaults to nullptr. If custom memory management is being used and this hasn't been set then the default memory
         * manager will be used. If this has been set and custom memory management has been turned on, then this will be installed
         * at startup time.
         */
        Aws::Utils::Memory::MemorySystemInterface* memoryManager;
    };

    /**
     * SDK wide options for http
     */
    struct HttpOptions
    {
        HttpOptions() : httpClientFactory(nullptr)
        { }

        /**
         * Defaults to nullptr, if this is set, then it will be installed and used instead of the system defaults
         */
        std::shared_ptr<Aws::Http::HttpClientFactory> httpClientFactory;
    };

    /**
     * SDK wide options for crypto
     */
    struct CryptoOptions
    {
        CryptoOptions() :
                md5Factory(nullptr), sha256Factory(nullptr), sha256HMACFactory(nullptr),
                aes_CBCFactory(nullptr), aes_CTRFactory(nullptr), aes_GCMFactory(nullptr),
                secureRandomFactory(nullptr)
        { }

        std::shared_ptr<Aws::Utils::Crypto::HashFactory> md5Factory;
        std::shared_ptr<Aws::Utils::Crypto::HashFactory> sha256Factory;
        std::shared_ptr<Aws::Utils::Crypto::HMACFactory> sha256HMACFactory;
        std::shared_ptr<Aws::Utils::Crypto::SymmetricCipherFactory> aes_CBCFactory;
        std::shared_ptr<Aws::Utils::Crypto::SymmetricCipherFactory> aes_CTRFactory;
        std::shared_ptr<Aws::Utils::Crypto::SymmetricCipherFactory> aes_GCMFactory;
        std::shared_ptr<Aws::Utils::Crypto::SecureRandomFactory> secureRandomFactory;
    };

    struct SDKOptions
    {
        LoggingOptions loggingOptions;
        MemoryManagementOptions memoryManagementOptions;
        HttpOptions httpOptions;
        CryptoOptions cryptoOptions;
    };

    AWS_CORE_API void InitAPI(const SDKOptions& options);
    AWS_CORE_API void ShutdownAPI(const SDKOptions& options);
}


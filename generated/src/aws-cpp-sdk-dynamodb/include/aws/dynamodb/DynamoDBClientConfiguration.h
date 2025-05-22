/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>


namespace Aws
{
    namespace DynamoDB
    {
        struct AWS_DYNAMODB_API DynamoDBClientConfiguration : public Aws::Client::GenericClientConfiguration
        {
            using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;
            static const bool EndpointDiscoverySupported = true;
            static const bool EndpointDiscoveryRequired = false;

            DynamoDBClientConfiguration(const DynamoDBClientConfiguration& other)
                : Aws::Client::GenericClientConfiguration(other),
                  enableEndpointDiscovery(BaseClientConfigClass::enableEndpointDiscovery)
            {
            }

            DynamoDBClientConfiguration(DynamoDBClientConfiguration&& other) noexcept
                : Aws::Client::GenericClientConfiguration(std::move(other)),
                  enableEndpointDiscovery(BaseClientConfigClass::enableEndpointDiscovery)
            {
            }

            DynamoDBClientConfiguration& operator=(const DynamoDBClientConfiguration& other)
            {
                if (this == &other)
                    return *this;
                Aws::Client::GenericClientConfiguration::operator =(other);
                return *this;
            }

            DynamoDBClientConfiguration& operator=(DynamoDBClientConfiguration&& other) noexcept
            {
                if (this == &other)
                    return *this;
                Aws::Client::GenericClientConfiguration::operator =(std::move(other));
                return *this;
            }

            DynamoDBClientConfiguration(const Client::ClientConfigurationInitValues &configuration = {});

            /**
            * Create a configuration based on settings in the aws configuration file for the given profile name.
            * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
            * @param profileName the aws profile name.
            * @param shouldDisableIMDS whether or not to disable IMDS calls.
            */
            DynamoDBClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

            /**
            * Create a configuration with a predefined smart defaults
            * @param useSmartDefaults, required to differentiate c-tors
            * @param defaultMode, default mode to use
            * @param shouldDisableIMDS whether or not to disable IMDS calls.
            */
            DynamoDBClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

            /**
            * Converting constructors for compatibility with a legacy code
            */
            DynamoDBClientConfiguration(const Client::ClientConfiguration& config);

            /**
             * Enable endpoint discovery
             * For some services to dynamically set up their endpoints for different requests.
             * By default, service clients will decide if endpoint discovery is enabled or not.
             * If disabled, regional or overridden endpoint will be used instead.
             * If a request requires endpoint discovery, but it was disabled then the request will never succeed.
             * A boolean value is either true of false, use Optional here to have an instance does not contain a value,
             * such that SDK will decide the default behavior as stated before, if no value specified.
             * DynamoDB service client does not require endpoint discovery. The default value for this setting is Disabled.
             */
            Aws::Crt::Optional<bool>& enableEndpointDiscovery;

        private:
            void LoadDynamoDBSpecificConfig(const Aws::String& profileName);
        };
    }
}
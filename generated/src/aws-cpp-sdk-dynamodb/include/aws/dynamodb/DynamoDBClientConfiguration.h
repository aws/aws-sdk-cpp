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
             * The AWS AccountId used for the request.
             */
            Aws::String accountId;
            /**
             * The AccountId Endpoint Mode.
             */
            Aws::String accountIdEndpointMode = "preferred";
        private:
            void LoadDynamoDBSpecificConfig(const Aws::String& profileName);
        };
    }
}
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/DynamoDBClientConfiguration.h>

namespace Aws
{
namespace DynamoDB
{


void DynamoDBClientConfiguration::LoadDynamoDBSpecificConfig(const Aws::String& inputProfileName)
{
  // accountId is intentionally not set here: AWS_ACCOUNT_ID env variable may not match the provided credentials.
  // it must be set by an auth provider / identity resolver or by an SDK user.
  static const char AWS_ACCOUNT_ID_ENDPOINT_MODE_ENVIRONMENT_VARIABLE[] = "AWS_ACCOUNT_ID_ENDPOINT_MODE";
  static const char AWS_ACCOUNT_ID_ENDPOINT_MODE_CONFIG_FILE_OPTION[] = "account_id_endpoint_mode";
  accountIdEndpointMode = ClientConfiguration::LoadConfigFromEnvOrProfile(AWS_ACCOUNT_ID_ENDPOINT_MODE_ENVIRONMENT_VARIABLE,
                                                                               inputProfileName,
                                                                               AWS_ACCOUNT_ID_ENDPOINT_MODE_CONFIG_FILE_OPTION,
                                                                               {"required", "disabled", "preferred"}, /* allowed values */
                                                                               "preferred" /* default value */);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const Client::ClientConfigurationInitValues &configuration)
: BaseClientConfigClass(configuration)
{
  LoadDynamoDBSpecificConfig(this->profileName);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
: BaseClientConfigClass(inputProfileName, shouldDisableIMDS)
{
  LoadDynamoDBSpecificConfig(Aws::String(inputProfileName));
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
: BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS)
{
  LoadDynamoDBSpecificConfig(this->profileName);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const Client::ClientConfiguration& config)  : BaseClientConfigClass(config){
  LoadDynamoDBSpecificConfig(this->profileName);
}


} // namespace DynamoDB
} // namespace Aws

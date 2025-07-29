/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/DynamoDBClientConfiguration.h>

namespace Aws
{
namespace DynamoDB
{


bool IsEndpointDiscoveryEnabled(const Aws::String& endpointOverride, const Aws::String &profileName)
{
  bool enabled = false;

  if (!endpointOverride.empty())
  {
    enabled = false;
  }
  else
  {
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY = "AWS_ENABLE_ENDPOINT_DISCOVERY";
    static const char* AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY = "endpoint_discovery_enabled";
    static const char* AWS_EP_DISCOVERY_ENABLED = "true";
    static const char* AWS_EP_DISCOVERY_DISABLED = "false";
    static const char* DEFAULT_VALUE_FOR_DYNAMODB = AWS_EP_DISCOVERY_DISABLED;

    Aws::String configVal = Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
        AWS_ENABLE_ENDPOINT_DISCOVERY_ENV_KEY, profileName, AWS_ENABLE_ENDPOINT_DISCOVERY_PROFILE_KEY,
        {AWS_EP_DISCOVERY_ENABLED, AWS_EP_DISCOVERY_DISABLED}, DEFAULT_VALUE_FOR_DYNAMODB);

    if (AWS_EP_DISCOVERY_ENABLED == configVal) {
      enabled = true;
    } else if (AWS_EP_DISCOVERY_DISABLED == configVal) {
      enabled = false;
    }
  }
  return enabled;
}

void DynamoDBClientConfiguration::LoadDynamoDBSpecificConfig(const Aws::String& inputProfileName)
{
  if(!enableEndpointDiscovery) {
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, inputProfileName);
  }
  this->configFactories.retryStrategyCreateFn = []() -> std::shared_ptr<Client::RetryStrategy> {
    // TODO: renable once default retries are evaluated
    // Align with other SDKs to default retry to 10 times for dynamodb.
    // return Client::InitRetryStrategy(10);
    return Client::InitRetryStrategy();
  };
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const Client::ClientConfigurationInitValues &configuration)
: BaseClientConfigClass(configuration), enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
  LoadDynamoDBSpecificConfig(this->profileName);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
: BaseClientConfigClass(inputProfileName, shouldDisableIMDS), enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
  LoadDynamoDBSpecificConfig(Aws::String(inputProfileName));
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
: BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS), enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery)
{
  LoadDynamoDBSpecificConfig(this->profileName);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const Client::ClientConfiguration& config)  : BaseClientConfigClass(config), enableEndpointDiscovery(ClientConfiguration::enableEndpointDiscovery){
  LoadDynamoDBSpecificConfig(this->profileName);
}


} // namespace DynamoDB
} // namespace Aws

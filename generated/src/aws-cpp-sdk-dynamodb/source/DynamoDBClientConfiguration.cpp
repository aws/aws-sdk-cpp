/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/UserAgent.h>
#include <aws/dynamodb/DynamoDBClientConfiguration.h>
#include <smithy/client/features/UserAgentFeatureInterceptor.h>

namespace Aws {
namespace DynamoDB {

bool IsEndpointDiscoveryEnabled(const Aws::String& endpointOverride, const Aws::String& profileName) {
  bool enabled = false;

  if (!endpointOverride.empty()) {
    enabled = false;
  } else {
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

void DynamoDBClientConfiguration::LoadDynamoDBSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  // accountId is intentionally not loaded: AWS_ACCOUNT_ID may not match the credentials in use.
  accountIdEndpointMode = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
      "AWS_ACCOUNT_ID_ENDPOINT_MODE", this->profileName, "account_id_endpoint_mode", {"required", "disabled", "preferred"}, "preferred");
  if (!enableEndpointDiscovery) {
    enableEndpointDiscovery = IsEndpointDiscoveryEnabled(this->endpointOverride, inputProfileName);
  }
  this->configFactories.retryStrategyCreateFn = []() -> std::shared_ptr<Client::RetryStrategy> {
    return Client::InitRetryStrategy(4, "", 0.025);
  };
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDynamoDBSpecificConfig(this->profileName);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDynamoDBSpecificConfig(Aws::String(inputProfileName));
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDynamoDBSpecificConfig(this->profileName);
}

DynamoDBClientConfiguration::DynamoDBClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDynamoDBSpecificConfig(this->profileName);
}

Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> DynamoDBClientConfiguration::CreateInterceptors(
    const Aws::Client::CreateInterceptorsRequest& request) const {
  static const char TAG[] = "DynamoDBClientConfiguration";
  Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> interceptors;
  const auto accountIdEndpointModeFeature = Aws::Client::UserAgent::FeatureForAccountIdEndpointMode(accountIdEndpointMode);
  if (accountIdEndpointModeFeature) {
    interceptors.push_back(Aws::MakeShared<smithy::client::features::UserAgentFeatureInterceptor>(
        TAG, Aws::Set<Aws::Client::UserAgentFeature>{*accountIdEndpointModeFeature}));
  }
  (void)(request);
  return interceptors;
}

}  // namespace DynamoDB
}  // namespace Aws

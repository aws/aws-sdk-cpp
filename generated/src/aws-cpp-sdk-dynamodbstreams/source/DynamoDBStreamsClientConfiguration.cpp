/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/DynamoDBStreamsClientConfiguration.h>

namespace Aws {
namespace DynamoDBStreams {

void DynamoDBStreamsClientConfiguration::LoadDynamoDBStreamsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  this->configFactories.retryStrategyCreateFn = []() -> std::shared_ptr<Client::RetryStrategy> {
    return Client::InitRetryStrategy(4, "", 0.025);
  };
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

DynamoDBStreamsClientConfiguration::DynamoDBStreamsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDynamoDBStreamsSpecificConfig(this->profileName);
}

DynamoDBStreamsClientConfiguration::DynamoDBStreamsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDynamoDBStreamsSpecificConfig(Aws::String(inputProfileName));
}

DynamoDBStreamsClientConfiguration::DynamoDBStreamsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDynamoDBStreamsSpecificConfig(this->profileName);
}

DynamoDBStreamsClientConfiguration::DynamoDBStreamsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDynamoDBStreamsSpecificConfig(this->profileName);
}

}  // namespace DynamoDBStreams
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/DynamoDBStreamsClientConfiguration.h>

namespace Aws {
namespace DynamoDBStreams {

void DynamoDBStreamsClientConfiguration::LoadDynamoDBStreamsSpecificConfig(const Aws::String& inputProfileName) {
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

DynamoDBStreamsClientConfiguration::DynamoDBStreamsClientConfiguration(const Aws::Client::ClientConfiguration& config)
    : BaseClientConfigClass(config) {
  LoadDynamoDBStreamsSpecificConfig(this->profileName);
}

}  // namespace DynamoDBStreams
}  // namespace Aws

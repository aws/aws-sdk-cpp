/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClientConfiguration.h>

namespace Aws {
namespace BedrockAgentCoreControl {

void BedrockAgentCoreControlClientConfiguration::LoadBedrockAgentCoreControlSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

BedrockAgentCoreControlClientConfiguration::BedrockAgentCoreControlClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockAgentCoreControlSpecificConfig(this->profileName);
}

BedrockAgentCoreControlClientConfiguration::BedrockAgentCoreControlClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockAgentCoreControlSpecificConfig(Aws::String(inputProfileName));
}

BedrockAgentCoreControlClientConfiguration::BedrockAgentCoreControlClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockAgentCoreControlSpecificConfig(this->profileName);
}

BedrockAgentCoreControlClientConfiguration::BedrockAgentCoreControlClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBedrockAgentCoreControlSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BedrockAgentCoreControlClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace BedrockAgentCoreControl
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClientConfiguration.h>

namespace Aws {
namespace BedrockAgentCoreControl {

void BedrockAgentCoreControlClientConfiguration::LoadBedrockAgentCoreControlSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
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

}  // namespace BedrockAgentCoreControl
}  // namespace Aws

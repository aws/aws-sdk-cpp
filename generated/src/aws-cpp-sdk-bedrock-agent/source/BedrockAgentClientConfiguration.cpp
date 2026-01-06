/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/BedrockAgentClientConfiguration.h>

namespace Aws {
namespace BedrockAgent {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

void BedrockAgentClientConfiguration::LoadBedrockAgentSpecificConfig(const Aws::String& inputProfileName) {
  const Aws::String& bedrockToken =
      BaseClientConfigClass::LoadConfigFromEnvOrProfile(AWS_BEARER_TOKEN_BEDROCK, inputProfileName, AWS_BEARER_TOKEN_BEDROCK, {}, "");
  if (!bedrockToken.empty()) {
    std::vector<Aws::String>::iterator position = std::find(authPreferences.begin(), authPreferences.end(), "bearer");
    if (position != authPreferences.end()) {
      authPreferences.erase(position);
    }
    authPreferences.insert(authPreferences.begin(), "bearer");
  }
}

BedrockAgentClientConfiguration::BedrockAgentClientConfiguration(const Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockAgentSpecificConfig(this->profileName);
}

BedrockAgentClientConfiguration::BedrockAgentClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockAgentSpecificConfig(Aws::String(inputProfileName));
}

BedrockAgentClientConfiguration::BedrockAgentClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockAgentSpecificConfig(this->profileName);
}

BedrockAgentClientConfiguration::BedrockAgentClientConfiguration(const Client::ClientConfiguration& config)
    : BaseClientConfigClass(config) {
  LoadBedrockAgentSpecificConfig(this->profileName);
}

}  // namespace BedrockAgent
}  // namespace Aws

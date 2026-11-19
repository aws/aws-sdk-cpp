/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClientConfiguration.h>

namespace Aws {
namespace BedrockAgentRuntime {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

void BedrockAgentRuntimeClientConfiguration::LoadBedrockAgentRuntimeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
  const Aws::String& bedrockToken =
      BaseClientConfigClass::LoadConfigFromEnvOrProfile(AWS_BEARER_TOKEN_BEDROCK, inputProfileName, AWS_BEARER_TOKEN_BEDROCK, {}, "");
  if (!bedrockToken.empty()) {
    Aws::Vector<Aws::String>::iterator position = std::find(authPreferences.begin(), authPreferences.end(), "bearer");
    if (position != authPreferences.end()) {
      authPreferences.erase(position);
    }
    authPreferences.insert(authPreferences.begin(), "bearer");
  }
}

BedrockAgentRuntimeClientConfiguration::BedrockAgentRuntimeClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockAgentRuntimeSpecificConfig(this->profileName);
}

BedrockAgentRuntimeClientConfiguration::BedrockAgentRuntimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockAgentRuntimeSpecificConfig(Aws::String(inputProfileName));
}

BedrockAgentRuntimeClientConfiguration::BedrockAgentRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockAgentRuntimeSpecificConfig(this->profileName);
}

BedrockAgentRuntimeClientConfiguration::BedrockAgentRuntimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBedrockAgentRuntimeSpecificConfig(this->profileName);
}

}  // namespace BedrockAgentRuntime
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeClientConfiguration.h>

namespace Aws {
namespace BedrockDataAutomationRuntime {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

void BedrockDataAutomationRuntimeClientConfiguration::LoadBedrockDataAutomationRuntimeSpecificConfig(const Aws::String& inputProfileName) {
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

BedrockDataAutomationRuntimeClientConfiguration::BedrockDataAutomationRuntimeClientConfiguration(
    const Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockDataAutomationRuntimeSpecificConfig(this->profileName);
}

BedrockDataAutomationRuntimeClientConfiguration::BedrockDataAutomationRuntimeClientConfiguration(const char* inputProfileName,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockDataAutomationRuntimeSpecificConfig(Aws::String(inputProfileName));
}

BedrockDataAutomationRuntimeClientConfiguration::BedrockDataAutomationRuntimeClientConfiguration(bool useSmartDefaults,
                                                                                                 const char* defaultMode,
                                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockDataAutomationRuntimeSpecificConfig(this->profileName);
}

BedrockDataAutomationRuntimeClientConfiguration::BedrockDataAutomationRuntimeClientConfiguration(const Client::ClientConfiguration& config)
    : BaseClientConfigClass(config) {
  LoadBedrockDataAutomationRuntimeSpecificConfig(this->profileName);
}

}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws

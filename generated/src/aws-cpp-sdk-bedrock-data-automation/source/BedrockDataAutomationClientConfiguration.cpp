/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/BedrockDataAutomationClientConfiguration.h>

#if defined(_MSC_VER)
#define AWS_UNREFERENCED_PARAM(x) (&reinterpret_cast<const int&>(x))
#else
#define AWS_UNREFERENCED_PARAM(x) ((void)(x))
#endif

namespace Aws {
namespace BedrockDataAutomation {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

void BedrockDataAutomationClientConfiguration::LoadBedrockDataAutomationSpecificConfig(const Aws::String& inputProfileName) {
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

BedrockDataAutomationClientConfiguration::BedrockDataAutomationClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockDataAutomationSpecificConfig(this->profileName);
}

BedrockDataAutomationClientConfiguration::BedrockDataAutomationClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockDataAutomationSpecificConfig(Aws::String(inputProfileName));
}

BedrockDataAutomationClientConfiguration::BedrockDataAutomationClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockDataAutomationSpecificConfig(this->profileName);
}

BedrockDataAutomationClientConfiguration::BedrockDataAutomationClientConfiguration(const Aws::Client::ClientConfiguration& config)
    : BaseClientConfigClass(config) {
  LoadBedrockDataAutomationSpecificConfig(this->profileName);
}

}  // namespace BedrockDataAutomation
}  // namespace Aws

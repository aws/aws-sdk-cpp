/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/BedrockClientConfiguration.h>

namespace Aws {
namespace Bedrock {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

void BedrockClientConfiguration::LoadBedrockSpecificConfig(const Aws::String& inputProfileName) {
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

BedrockClientConfiguration::BedrockClientConfiguration(const Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockSpecificConfig(this->profileName);
}

BedrockClientConfiguration::BedrockClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockSpecificConfig(Aws::String(inputProfileName));
}

BedrockClientConfiguration::BedrockClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockSpecificConfig(this->profileName);
}

BedrockClientConfiguration::BedrockClientConfiguration(const Client::ClientConfiguration& config) : BaseClientConfigClass(config) {
  LoadBedrockSpecificConfig(this->profileName);
}

}  // namespace Bedrock
}  // namespace Aws

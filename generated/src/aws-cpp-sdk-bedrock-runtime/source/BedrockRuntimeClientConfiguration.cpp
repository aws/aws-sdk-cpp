/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/BedrockRuntimeClientConfiguration.h>

namespace Aws {
namespace BedrockRuntime {

static const char AWS_BEARER_TOKEN_BEDROCK[] = "AWS_BEARER_TOKEN_BEDROCK";

void BedrockRuntimeClientConfiguration::LoadBedrockRuntimeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBedrockRuntimeSpecificConfig(this->profileName);
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBedrockRuntimeSpecificConfig(Aws::String(inputProfileName));
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBedrockRuntimeSpecificConfig(this->profileName);
}

BedrockRuntimeClientConfiguration::BedrockRuntimeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBedrockRuntimeSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BedrockRuntimeClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.disableExpectHeader = config.disableExpectHeader;
  options.httpClientChunkedMode = config.httpClientChunkedMode;
  options.awsChunkedBufferSize = config.awsChunkedBufferSize;
  return options;
}

}  // namespace BedrockRuntime
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/JsonProtocolClientConfiguration.h>

namespace Aws {
namespace JsonProtocol {

void JsonProtocolClientConfiguration::LoadJsonProtocolSpecificConfig(const Aws::String& inputProfileName) {
  requestCompressionConfig = Aws::Client::LoadRequestCompressionConfigFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

JsonProtocolClientConfiguration::JsonProtocolClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadJsonProtocolSpecificConfig(this->profileName);
}

JsonProtocolClientConfiguration::JsonProtocolClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadJsonProtocolSpecificConfig(Aws::String(inputProfileName));
}

JsonProtocolClientConfiguration::JsonProtocolClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadJsonProtocolSpecificConfig(this->profileName);
}

JsonProtocolClientConfiguration::JsonProtocolClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadJsonProtocolSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const JsonProtocolClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.requestCompressionConfig = config.requestCompressionConfig;
  return options;
}

}  // namespace JsonProtocol
}  // namespace Aws

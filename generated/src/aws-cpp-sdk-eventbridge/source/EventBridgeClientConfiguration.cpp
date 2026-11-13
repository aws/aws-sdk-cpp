/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/EventBridgeClientConfiguration.h>

namespace Aws {
namespace EventBridge {

void EventBridgeClientConfiguration::LoadEventBridgeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
  sigV4aSigningRegionSet = Aws::Client::LoadSigV4aSigningRegionSetFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EventBridgeClientConfiguration::EventBridgeClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEventBridgeSpecificConfig(this->profileName);
}

EventBridgeClientConfiguration::EventBridgeClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEventBridgeSpecificConfig(Aws::String(inputProfileName));
}

EventBridgeClientConfiguration::EventBridgeClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEventBridgeSpecificConfig(this->profileName);
}

EventBridgeClientConfiguration::EventBridgeClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEventBridgeSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EventBridgeClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.sigV4aSigningRegionSet = config.sigV4aSigningRegionSet;
  return options;
}

}  // namespace EventBridge
}  // namespace Aws

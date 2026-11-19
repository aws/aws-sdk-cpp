/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/EventBridgeClientConfiguration.h>
#include <smithy/identity/signer/built-in/SigV4aSigningRegionSet.h>

namespace Aws {
namespace EventBridge {

void EventBridgeClientConfiguration::LoadEventBridgeSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
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

}  // namespace EventBridge
}  // namespace Aws

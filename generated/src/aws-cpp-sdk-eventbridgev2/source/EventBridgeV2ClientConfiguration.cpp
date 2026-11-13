/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridgev2/EventBridgeV2ClientConfiguration.h>

namespace Aws {
namespace EventBridgeV2 {

void EventBridgeV2ClientConfiguration::LoadEventBridgeV2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
  accountIdEndpointMode = Aws::Client::LoadAccountIdEndpointModeFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EventBridgeV2ClientConfiguration::EventBridgeV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEventBridgeV2SpecificConfig(this->profileName);
}

EventBridgeV2ClientConfiguration::EventBridgeV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEventBridgeV2SpecificConfig(Aws::String(inputProfileName));
}

EventBridgeV2ClientConfiguration::EventBridgeV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEventBridgeV2SpecificConfig(this->profileName);
}

EventBridgeV2ClientConfiguration::EventBridgeV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEventBridgeV2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EventBridgeV2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  options.accountId = config.accountId;
  options.accountIdEndpointMode = config.accountIdEndpointMode;
  return options;
}

}  // namespace EventBridgeV2
}  // namespace Aws

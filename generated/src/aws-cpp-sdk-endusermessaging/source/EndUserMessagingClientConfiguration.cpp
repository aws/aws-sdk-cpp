/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/endusermessaging/EndUserMessagingClientConfiguration.h>

namespace Aws {
namespace EndUserMessaging {

void EndUserMessagingClientConfiguration::LoadEndUserMessagingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

EndUserMessagingClientConfiguration::EndUserMessagingClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEndUserMessagingSpecificConfig(this->profileName);
}

EndUserMessagingClientConfiguration::EndUserMessagingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEndUserMessagingSpecificConfig(Aws::String(inputProfileName));
}

EndUserMessagingClientConfiguration::EndUserMessagingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEndUserMessagingSpecificConfig(this->profileName);
}

EndUserMessagingClientConfiguration::EndUserMessagingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEndUserMessagingSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const EndUserMessagingClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace EndUserMessaging
}  // namespace Aws

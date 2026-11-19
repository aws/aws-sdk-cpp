/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/endusermessaging/EndUserMessagingClientConfiguration.h>

namespace Aws {
namespace EndUserMessaging {

void EndUserMessagingClientConfiguration::LoadEndUserMessagingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
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

}  // namespace EndUserMessaging
}  // namespace Aws

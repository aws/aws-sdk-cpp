/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/CodeStarNotificationsClientConfiguration.h>

namespace Aws {
namespace CodeStarNotifications {

void CodeStarNotificationsClientConfiguration::LoadCodeStarNotificationsSpecificConfig(const Aws::String& inputProfileName) {
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

CodeStarNotificationsClientConfiguration::CodeStarNotificationsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCodeStarNotificationsSpecificConfig(this->profileName);
}

CodeStarNotificationsClientConfiguration::CodeStarNotificationsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCodeStarNotificationsSpecificConfig(Aws::String(inputProfileName));
}

CodeStarNotificationsClientConfiguration::CodeStarNotificationsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCodeStarNotificationsSpecificConfig(this->profileName);
}

CodeStarNotificationsClientConfiguration::CodeStarNotificationsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCodeStarNotificationsSpecificConfig(this->profileName);
}

}  // namespace CodeStarNotifications
}  // namespace Aws

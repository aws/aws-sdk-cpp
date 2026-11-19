/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClientConfiguration.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {

void LicenseManagerLinuxSubscriptionsClientConfiguration::LoadLicenseManagerLinuxSubscriptionsSpecificConfig(
    const Aws::String& inputProfileName) {
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

LicenseManagerLinuxSubscriptionsClientConfiguration::LicenseManagerLinuxSubscriptionsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLicenseManagerLinuxSubscriptionsSpecificConfig(this->profileName);
}

LicenseManagerLinuxSubscriptionsClientConfiguration::LicenseManagerLinuxSubscriptionsClientConfiguration(const char* inputProfileName,
                                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLicenseManagerLinuxSubscriptionsSpecificConfig(Aws::String(inputProfileName));
}

LicenseManagerLinuxSubscriptionsClientConfiguration::LicenseManagerLinuxSubscriptionsClientConfiguration(bool useSmartDefaults,
                                                                                                         const char* defaultMode,
                                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLicenseManagerLinuxSubscriptionsSpecificConfig(this->profileName);
}

LicenseManagerLinuxSubscriptionsClientConfiguration::LicenseManagerLinuxSubscriptionsClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLicenseManagerLinuxSubscriptionsSpecificConfig(this->profileName);
}

}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws

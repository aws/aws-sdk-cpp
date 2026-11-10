/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClientConfiguration.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {

void LicenseManagerUserSubscriptionsClientConfiguration::LoadLicenseManagerUserSubscriptionsSpecificConfig(
    const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

LicenseManagerUserSubscriptionsClientConfiguration::LicenseManagerUserSubscriptionsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLicenseManagerUserSubscriptionsSpecificConfig(this->profileName);
}

LicenseManagerUserSubscriptionsClientConfiguration::LicenseManagerUserSubscriptionsClientConfiguration(const char* inputProfileName,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLicenseManagerUserSubscriptionsSpecificConfig(Aws::String(inputProfileName));
}

LicenseManagerUserSubscriptionsClientConfiguration::LicenseManagerUserSubscriptionsClientConfiguration(bool useSmartDefaults,
                                                                                                       const char* defaultMode,
                                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLicenseManagerUserSubscriptionsSpecificConfig(this->profileName);
}

LicenseManagerUserSubscriptionsClientConfiguration::LicenseManagerUserSubscriptionsClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLicenseManagerUserSubscriptionsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const LicenseManagerUserSubscriptionsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws

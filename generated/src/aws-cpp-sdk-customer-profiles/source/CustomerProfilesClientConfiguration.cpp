/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/CustomerProfilesClientConfiguration.h>

namespace Aws {
namespace CustomerProfiles {

void CustomerProfilesClientConfiguration::LoadCustomerProfilesSpecificConfig(const Aws::String& inputProfileName) {
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

CustomerProfilesClientConfiguration::CustomerProfilesClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCustomerProfilesSpecificConfig(this->profileName);
}

CustomerProfilesClientConfiguration::CustomerProfilesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCustomerProfilesSpecificConfig(Aws::String(inputProfileName));
}

CustomerProfilesClientConfiguration::CustomerProfilesClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCustomerProfilesSpecificConfig(this->profileName);
}

CustomerProfilesClientConfiguration::CustomerProfilesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCustomerProfilesSpecificConfig(this->profileName);
}

}  // namespace CustomerProfiles
}  // namespace Aws

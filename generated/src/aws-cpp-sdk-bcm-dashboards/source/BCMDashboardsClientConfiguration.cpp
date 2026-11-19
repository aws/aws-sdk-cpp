/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/BCMDashboardsClientConfiguration.h>

namespace Aws {
namespace BCMDashboards {

void BCMDashboardsClientConfiguration::LoadBCMDashboardsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

BCMDashboardsClientConfiguration::BCMDashboardsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBCMDashboardsSpecificConfig(this->profileName);
}

BCMDashboardsClientConfiguration::BCMDashboardsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBCMDashboardsSpecificConfig(Aws::String(inputProfileName));
}

BCMDashboardsClientConfiguration::BCMDashboardsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBCMDashboardsSpecificConfig(this->profileName);
}

BCMDashboardsClientConfiguration::BCMDashboardsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBCMDashboardsSpecificConfig(this->profileName);
}

}  // namespace BCMDashboards
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/BCMDashboardsClientConfiguration.h>

namespace Aws {
namespace BCMDashboards {

void BCMDashboardsClientConfiguration::LoadBCMDashboardsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BCMDashboardsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace BCMDashboards
}  // namespace Aws

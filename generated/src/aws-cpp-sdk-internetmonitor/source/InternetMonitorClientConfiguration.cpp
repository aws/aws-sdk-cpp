/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/InternetMonitorClientConfiguration.h>

namespace Aws {
namespace InternetMonitor {

void InternetMonitorClientConfiguration::LoadInternetMonitorSpecificConfig(const Aws::String& inputProfileName) {
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

InternetMonitorClientConfiguration::InternetMonitorClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadInternetMonitorSpecificConfig(this->profileName);
}

InternetMonitorClientConfiguration::InternetMonitorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadInternetMonitorSpecificConfig(Aws::String(inputProfileName));
}

InternetMonitorClientConfiguration::InternetMonitorClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadInternetMonitorSpecificConfig(this->profileName);
}

InternetMonitorClientConfiguration::InternetMonitorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadInternetMonitorSpecificConfig(this->profileName);
}

}  // namespace InternetMonitor
}  // namespace Aws

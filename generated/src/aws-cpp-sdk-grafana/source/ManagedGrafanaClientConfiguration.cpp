/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/ManagedGrafanaClientConfiguration.h>

namespace Aws {
namespace ManagedGrafana {

void ManagedGrafanaClientConfiguration::LoadManagedGrafanaSpecificConfig(const Aws::String& inputProfileName) {
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

ManagedGrafanaClientConfiguration::ManagedGrafanaClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadManagedGrafanaSpecificConfig(this->profileName);
}

ManagedGrafanaClientConfiguration::ManagedGrafanaClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadManagedGrafanaSpecificConfig(Aws::String(inputProfileName));
}

ManagedGrafanaClientConfiguration::ManagedGrafanaClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadManagedGrafanaSpecificConfig(this->profileName);
}

ManagedGrafanaClientConfiguration::ManagedGrafanaClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadManagedGrafanaSpecificConfig(this->profileName);
}

}  // namespace ManagedGrafana
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/ManagedGrafanaClientConfiguration.h>

namespace Aws {
namespace ManagedGrafana {

void ManagedGrafanaClientConfiguration::LoadManagedGrafanaSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ManagedGrafanaClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ManagedGrafana
}  // namespace Aws

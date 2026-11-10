/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/IoTManagedIntegrationsClientConfiguration.h>

namespace Aws {
namespace IoTManagedIntegrations {

void IoTManagedIntegrationsClientConfiguration::LoadIoTManagedIntegrationsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

IoTManagedIntegrationsClientConfiguration::IoTManagedIntegrationsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTManagedIntegrationsSpecificConfig(this->profileName);
}

IoTManagedIntegrationsClientConfiguration::IoTManagedIntegrationsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTManagedIntegrationsSpecificConfig(Aws::String(inputProfileName));
}

IoTManagedIntegrationsClientConfiguration::IoTManagedIntegrationsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTManagedIntegrationsSpecificConfig(this->profileName);
}

IoTManagedIntegrationsClientConfiguration::IoTManagedIntegrationsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTManagedIntegrationsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const IoTManagedIntegrationsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace IoTManagedIntegrations
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/IoTManagedIntegrationsClientConfiguration.h>

namespace Aws {
namespace IoTManagedIntegrations {

void IoTManagedIntegrationsClientConfiguration::LoadIoTManagedIntegrationsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
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

}  // namespace IoTManagedIntegrations
}  // namespace Aws

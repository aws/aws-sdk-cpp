/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/IoTThingsGraphClientConfiguration.h>

namespace Aws {
namespace IoTThingsGraph {

void IoTThingsGraphClientConfiguration::LoadIoTThingsGraphSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

IoTThingsGraphClientConfiguration::IoTThingsGraphClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTThingsGraphSpecificConfig(this->profileName);
}

IoTThingsGraphClientConfiguration::IoTThingsGraphClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTThingsGraphSpecificConfig(Aws::String(inputProfileName));
}

IoTThingsGraphClientConfiguration::IoTThingsGraphClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTThingsGraphSpecificConfig(this->profileName);
}

IoTThingsGraphClientConfiguration::IoTThingsGraphClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTThingsGraphSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const IoTThingsGraphClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace IoTThingsGraph
}  // namespace Aws

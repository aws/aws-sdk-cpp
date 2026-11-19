/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/IoTThingsGraphClientConfiguration.h>

namespace Aws {
namespace IoTThingsGraph {

void IoTThingsGraphClientConfiguration::LoadIoTThingsGraphSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace IoTThingsGraph
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/IoTFleetWiseClientConfiguration.h>

namespace Aws {
namespace IoTFleetWise {

void IoTFleetWiseClientConfiguration::LoadIoTFleetWiseSpecificConfig(const Aws::String& inputProfileName) {
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

IoTFleetWiseClientConfiguration::IoTFleetWiseClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTFleetWiseSpecificConfig(this->profileName);
}

IoTFleetWiseClientConfiguration::IoTFleetWiseClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTFleetWiseSpecificConfig(Aws::String(inputProfileName));
}

IoTFleetWiseClientConfiguration::IoTFleetWiseClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTFleetWiseSpecificConfig(this->profileName);
}

IoTFleetWiseClientConfiguration::IoTFleetWiseClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTFleetWiseSpecificConfig(this->profileName);
}

}  // namespace IoTFleetWise
}  // namespace Aws

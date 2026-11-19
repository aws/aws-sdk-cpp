/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/IoTTwinMakerClientConfiguration.h>

namespace Aws {
namespace IoTTwinMaker {

void IoTTwinMakerClientConfiguration::LoadIoTTwinMakerSpecificConfig(const Aws::String& inputProfileName) {
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

IoTTwinMakerClientConfiguration::IoTTwinMakerClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTTwinMakerSpecificConfig(this->profileName);
}

IoTTwinMakerClientConfiguration::IoTTwinMakerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTTwinMakerSpecificConfig(Aws::String(inputProfileName));
}

IoTTwinMakerClientConfiguration::IoTTwinMakerClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTTwinMakerSpecificConfig(this->profileName);
}

IoTTwinMakerClientConfiguration::IoTTwinMakerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTTwinMakerSpecificConfig(this->profileName);
}

}  // namespace IoTTwinMaker
}  // namespace Aws

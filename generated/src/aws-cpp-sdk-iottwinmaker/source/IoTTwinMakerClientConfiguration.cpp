/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/IoTTwinMakerClientConfiguration.h>

namespace Aws {
namespace IoTTwinMaker {

void IoTTwinMakerClientConfiguration::LoadIoTTwinMakerSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const IoTTwinMakerClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace IoTTwinMaker
}  // namespace Aws

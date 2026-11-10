/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorClientConfiguration.h>

namespace Aws {
namespace IoTDeviceAdvisor {

void IoTDeviceAdvisorClientConfiguration::LoadIoTDeviceAdvisorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

IoTDeviceAdvisorClientConfiguration::IoTDeviceAdvisorClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTDeviceAdvisorSpecificConfig(this->profileName);
}

IoTDeviceAdvisorClientConfiguration::IoTDeviceAdvisorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTDeviceAdvisorSpecificConfig(Aws::String(inputProfileName));
}

IoTDeviceAdvisorClientConfiguration::IoTDeviceAdvisorClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTDeviceAdvisorSpecificConfig(this->profileName);
}

IoTDeviceAdvisorClientConfiguration::IoTDeviceAdvisorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTDeviceAdvisorSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const IoTDeviceAdvisorClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace IoTDeviceAdvisor
}  // namespace Aws

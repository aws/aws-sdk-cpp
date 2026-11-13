/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/IoTJobsDataPlaneClientConfiguration.h>

namespace Aws {
namespace IoTJobsDataPlane {

void IoTJobsDataPlaneClientConfiguration::LoadIoTJobsDataPlaneSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

IoTJobsDataPlaneClientConfiguration::IoTJobsDataPlaneClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIoTJobsDataPlaneSpecificConfig(this->profileName);
}

IoTJobsDataPlaneClientConfiguration::IoTJobsDataPlaneClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIoTJobsDataPlaneSpecificConfig(Aws::String(inputProfileName));
}

IoTJobsDataPlaneClientConfiguration::IoTJobsDataPlaneClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIoTJobsDataPlaneSpecificConfig(this->profileName);
}

IoTJobsDataPlaneClientConfiguration::IoTJobsDataPlaneClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIoTJobsDataPlaneSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const IoTJobsDataPlaneClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace IoTJobsDataPlane
}  // namespace Aws

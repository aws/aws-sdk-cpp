/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/DeviceFarmClientConfiguration.h>

namespace Aws {
namespace DeviceFarm {

void DeviceFarmClientConfiguration::LoadDeviceFarmSpecificConfig(const Aws::String& inputProfileName) {
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

DeviceFarmClientConfiguration::DeviceFarmClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDeviceFarmSpecificConfig(this->profileName);
}

DeviceFarmClientConfiguration::DeviceFarmClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDeviceFarmSpecificConfig(Aws::String(inputProfileName));
}

DeviceFarmClientConfiguration::DeviceFarmClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDeviceFarmSpecificConfig(this->profileName);
}

DeviceFarmClientConfiguration::DeviceFarmClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDeviceFarmSpecificConfig(this->profileName);
}

}  // namespace DeviceFarm
}  // namespace Aws

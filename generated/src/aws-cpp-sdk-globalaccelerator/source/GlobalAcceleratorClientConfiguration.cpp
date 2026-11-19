/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/GlobalAcceleratorClientConfiguration.h>

namespace Aws {
namespace GlobalAccelerator {

void GlobalAcceleratorClientConfiguration::LoadGlobalAcceleratorSpecificConfig(const Aws::String& inputProfileName) {
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

GlobalAcceleratorClientConfiguration::GlobalAcceleratorClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadGlobalAcceleratorSpecificConfig(this->profileName);
}

GlobalAcceleratorClientConfiguration::GlobalAcceleratorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadGlobalAcceleratorSpecificConfig(Aws::String(inputProfileName));
}

GlobalAcceleratorClientConfiguration::GlobalAcceleratorClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadGlobalAcceleratorSpecificConfig(this->profileName);
}

GlobalAcceleratorClientConfiguration::GlobalAcceleratorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadGlobalAcceleratorSpecificConfig(this->profileName);
}

}  // namespace GlobalAccelerator
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/ApplicationDiscoveryServiceClientConfiguration.h>

namespace Aws {
namespace ApplicationDiscoveryService {

void ApplicationDiscoveryServiceClientConfiguration::LoadApplicationDiscoveryServiceSpecificConfig(const Aws::String& inputProfileName) {
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

ApplicationDiscoveryServiceClientConfiguration::ApplicationDiscoveryServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApplicationDiscoveryServiceSpecificConfig(this->profileName);
}

ApplicationDiscoveryServiceClientConfiguration::ApplicationDiscoveryServiceClientConfiguration(const char* inputProfileName,
                                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApplicationDiscoveryServiceSpecificConfig(Aws::String(inputProfileName));
}

ApplicationDiscoveryServiceClientConfiguration::ApplicationDiscoveryServiceClientConfiguration(bool useSmartDefaults,
                                                                                               const char* defaultMode,
                                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApplicationDiscoveryServiceSpecificConfig(this->profileName);
}

ApplicationDiscoveryServiceClientConfiguration::ApplicationDiscoveryServiceClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApplicationDiscoveryServiceSpecificConfig(this->profileName);
}

}  // namespace ApplicationDiscoveryService
}  // namespace Aws

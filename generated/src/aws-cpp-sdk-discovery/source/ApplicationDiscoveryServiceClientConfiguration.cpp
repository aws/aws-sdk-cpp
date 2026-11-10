/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/ApplicationDiscoveryServiceClientConfiguration.h>

namespace Aws {
namespace ApplicationDiscoveryService {

void ApplicationDiscoveryServiceClientConfiguration::LoadApplicationDiscoveryServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ApplicationDiscoveryServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ApplicationDiscoveryService
}  // namespace Aws

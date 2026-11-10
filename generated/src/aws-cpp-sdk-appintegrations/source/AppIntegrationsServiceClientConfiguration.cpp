/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/AppIntegrationsServiceClientConfiguration.h>

namespace Aws {
namespace AppIntegrationsService {

void AppIntegrationsServiceClientConfiguration::LoadAppIntegrationsServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

AppIntegrationsServiceClientConfiguration::AppIntegrationsServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAppIntegrationsServiceSpecificConfig(this->profileName);
}

AppIntegrationsServiceClientConfiguration::AppIntegrationsServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAppIntegrationsServiceSpecificConfig(Aws::String(inputProfileName));
}

AppIntegrationsServiceClientConfiguration::AppIntegrationsServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAppIntegrationsServiceSpecificConfig(this->profileName);
}

AppIntegrationsServiceClientConfiguration::AppIntegrationsServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAppIntegrationsServiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const AppIntegrationsServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace AppIntegrationsService
}  // namespace Aws

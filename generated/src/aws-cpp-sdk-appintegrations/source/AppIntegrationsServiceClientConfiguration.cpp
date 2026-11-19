/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/AppIntegrationsServiceClientConfiguration.h>

namespace Aws {
namespace AppIntegrationsService {

void AppIntegrationsServiceClientConfiguration::LoadAppIntegrationsServiceSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace AppIntegrationsService
}  // namespace Aws

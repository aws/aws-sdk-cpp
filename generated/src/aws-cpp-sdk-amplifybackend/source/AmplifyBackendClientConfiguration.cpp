/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/AmplifyBackendClientConfiguration.h>

namespace Aws {
namespace AmplifyBackend {

void AmplifyBackendClientConfiguration::LoadAmplifyBackendSpecificConfig(const Aws::String& inputProfileName) {
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

AmplifyBackendClientConfiguration::AmplifyBackendClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAmplifyBackendSpecificConfig(this->profileName);
}

AmplifyBackendClientConfiguration::AmplifyBackendClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAmplifyBackendSpecificConfig(Aws::String(inputProfileName));
}

AmplifyBackendClientConfiguration::AmplifyBackendClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAmplifyBackendSpecificConfig(this->profileName);
}

AmplifyBackendClientConfiguration::AmplifyBackendClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAmplifyBackendSpecificConfig(this->profileName);
}

}  // namespace AmplifyBackend
}  // namespace Aws

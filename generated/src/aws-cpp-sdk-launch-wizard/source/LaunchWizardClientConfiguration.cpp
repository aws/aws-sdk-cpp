/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/LaunchWizardClientConfiguration.h>

namespace Aws {
namespace LaunchWizard {

void LaunchWizardClientConfiguration::LoadLaunchWizardSpecificConfig(const Aws::String& inputProfileName) {
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

LaunchWizardClientConfiguration::LaunchWizardClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLaunchWizardSpecificConfig(this->profileName);
}

LaunchWizardClientConfiguration::LaunchWizardClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLaunchWizardSpecificConfig(Aws::String(inputProfileName));
}

LaunchWizardClientConfiguration::LaunchWizardClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLaunchWizardSpecificConfig(this->profileName);
}

LaunchWizardClientConfiguration::LaunchWizardClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLaunchWizardSpecificConfig(this->profileName);
}

}  // namespace LaunchWizard
}  // namespace Aws

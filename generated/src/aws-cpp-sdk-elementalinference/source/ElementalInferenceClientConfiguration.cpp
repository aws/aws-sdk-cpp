/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elementalinference/ElementalInferenceClientConfiguration.h>

namespace Aws {
namespace ElementalInference {

void ElementalInferenceClientConfiguration::LoadElementalInferenceSpecificConfig(const Aws::String& inputProfileName) {
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

ElementalInferenceClientConfiguration::ElementalInferenceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadElementalInferenceSpecificConfig(this->profileName);
}

ElementalInferenceClientConfiguration::ElementalInferenceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadElementalInferenceSpecificConfig(Aws::String(inputProfileName));
}

ElementalInferenceClientConfiguration::ElementalInferenceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadElementalInferenceSpecificConfig(this->profileName);
}

ElementalInferenceClientConfiguration::ElementalInferenceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadElementalInferenceSpecificConfig(this->profileName);
}

}  // namespace ElementalInference
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/ComprehendMedicalClientConfiguration.h>

namespace Aws {
namespace ComprehendMedical {

void ComprehendMedicalClientConfiguration::LoadComprehendMedicalSpecificConfig(const Aws::String& inputProfileName) {
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

ComprehendMedicalClientConfiguration::ComprehendMedicalClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadComprehendMedicalSpecificConfig(this->profileName);
}

ComprehendMedicalClientConfiguration::ComprehendMedicalClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadComprehendMedicalSpecificConfig(Aws::String(inputProfileName));
}

ComprehendMedicalClientConfiguration::ComprehendMedicalClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadComprehendMedicalSpecificConfig(this->profileName);
}

ComprehendMedicalClientConfiguration::ComprehendMedicalClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadComprehendMedicalSpecificConfig(this->profileName);
}

}  // namespace ComprehendMedical
}  // namespace Aws

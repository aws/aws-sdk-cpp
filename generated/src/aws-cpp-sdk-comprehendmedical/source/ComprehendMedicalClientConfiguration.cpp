/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/ComprehendMedicalClientConfiguration.h>

namespace Aws {
namespace ComprehendMedical {

void ComprehendMedicalClientConfiguration::LoadComprehendMedicalSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ComprehendMedicalClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ComprehendMedical
}  // namespace Aws

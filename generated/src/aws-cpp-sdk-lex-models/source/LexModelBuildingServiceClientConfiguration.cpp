/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/LexModelBuildingServiceClientConfiguration.h>

namespace Aws {
namespace LexModelBuildingService {

void LexModelBuildingServiceClientConfiguration::LoadLexModelBuildingServiceSpecificConfig(const Aws::String& inputProfileName) {
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

LexModelBuildingServiceClientConfiguration::LexModelBuildingServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLexModelBuildingServiceSpecificConfig(this->profileName);
}

LexModelBuildingServiceClientConfiguration::LexModelBuildingServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLexModelBuildingServiceSpecificConfig(Aws::String(inputProfileName));
}

LexModelBuildingServiceClientConfiguration::LexModelBuildingServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLexModelBuildingServiceSpecificConfig(this->profileName);
}

LexModelBuildingServiceClientConfiguration::LexModelBuildingServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLexModelBuildingServiceSpecificConfig(this->profileName);
}

}  // namespace LexModelBuildingService
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/LexModelBuildingServiceClientConfiguration.h>

namespace Aws {
namespace LexModelBuildingService {

void LexModelBuildingServiceClientConfiguration::LoadLexModelBuildingServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const LexModelBuildingServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace LexModelBuildingService
}  // namespace Aws

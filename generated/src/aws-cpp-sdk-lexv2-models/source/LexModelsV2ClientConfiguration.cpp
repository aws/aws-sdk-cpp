/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/LexModelsV2ClientConfiguration.h>

namespace Aws {
namespace LexModelsV2 {

void LexModelsV2ClientConfiguration::LoadLexModelsV2SpecificConfig(const Aws::String& inputProfileName) {
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

LexModelsV2ClientConfiguration::LexModelsV2ClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadLexModelsV2SpecificConfig(this->profileName);
}

LexModelsV2ClientConfiguration::LexModelsV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadLexModelsV2SpecificConfig(Aws::String(inputProfileName));
}

LexModelsV2ClientConfiguration::LexModelsV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadLexModelsV2SpecificConfig(this->profileName);
}

LexModelsV2ClientConfiguration::LexModelsV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadLexModelsV2SpecificConfig(this->profileName);
}

}  // namespace LexModelsV2
}  // namespace Aws

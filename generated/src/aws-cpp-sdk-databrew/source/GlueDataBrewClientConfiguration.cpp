/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/GlueDataBrewClientConfiguration.h>

namespace Aws {
namespace GlueDataBrew {

void GlueDataBrewClientConfiguration::LoadGlueDataBrewSpecificConfig(const Aws::String& inputProfileName) {
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

GlueDataBrewClientConfiguration::GlueDataBrewClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadGlueDataBrewSpecificConfig(this->profileName);
}

GlueDataBrewClientConfiguration::GlueDataBrewClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadGlueDataBrewSpecificConfig(Aws::String(inputProfileName));
}

GlueDataBrewClientConfiguration::GlueDataBrewClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadGlueDataBrewSpecificConfig(this->profileName);
}

GlueDataBrewClientConfiguration::GlueDataBrewClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadGlueDataBrewSpecificConfig(this->profileName);
}

}  // namespace GlueDataBrew
}  // namespace Aws

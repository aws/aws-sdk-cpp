/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/AccessAnalyzerClientConfiguration.h>

namespace Aws {
namespace AccessAnalyzer {

void AccessAnalyzerClientConfiguration::LoadAccessAnalyzerSpecificConfig(const Aws::String& inputProfileName) {
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

AccessAnalyzerClientConfiguration::AccessAnalyzerClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAccessAnalyzerSpecificConfig(this->profileName);
}

AccessAnalyzerClientConfiguration::AccessAnalyzerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAccessAnalyzerSpecificConfig(Aws::String(inputProfileName));
}

AccessAnalyzerClientConfiguration::AccessAnalyzerClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAccessAnalyzerSpecificConfig(this->profileName);
}

AccessAnalyzerClientConfiguration::AccessAnalyzerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAccessAnalyzerSpecificConfig(this->profileName);
}

}  // namespace AccessAnalyzer
}  // namespace Aws

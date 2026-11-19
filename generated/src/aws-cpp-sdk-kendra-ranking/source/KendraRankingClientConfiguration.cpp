/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/KendraRankingClientConfiguration.h>

namespace Aws {
namespace KendraRanking {

void KendraRankingClientConfiguration::LoadKendraRankingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

KendraRankingClientConfiguration::KendraRankingClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKendraRankingSpecificConfig(this->profileName);
}

KendraRankingClientConfiguration::KendraRankingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKendraRankingSpecificConfig(Aws::String(inputProfileName));
}

KendraRankingClientConfiguration::KendraRankingClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKendraRankingSpecificConfig(this->profileName);
}

KendraRankingClientConfiguration::KendraRankingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKendraRankingSpecificConfig(this->profileName);
}

}  // namespace KendraRanking
}  // namespace Aws

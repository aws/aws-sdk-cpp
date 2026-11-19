/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/ElasticsearchServiceClientConfiguration.h>

namespace Aws {
namespace ElasticsearchService {

void ElasticsearchServiceClientConfiguration::LoadElasticsearchServiceSpecificConfig(const Aws::String& inputProfileName) {
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

ElasticsearchServiceClientConfiguration::ElasticsearchServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadElasticsearchServiceSpecificConfig(this->profileName);
}

ElasticsearchServiceClientConfiguration::ElasticsearchServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadElasticsearchServiceSpecificConfig(Aws::String(inputProfileName));
}

ElasticsearchServiceClientConfiguration::ElasticsearchServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadElasticsearchServiceSpecificConfig(this->profileName);
}

ElasticsearchServiceClientConfiguration::ElasticsearchServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadElasticsearchServiceSpecificConfig(this->profileName);
}

}  // namespace ElasticsearchService
}  // namespace Aws

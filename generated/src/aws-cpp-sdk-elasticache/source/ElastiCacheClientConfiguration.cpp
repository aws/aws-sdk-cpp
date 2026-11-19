/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/ElastiCacheClientConfiguration.h>

namespace Aws {
namespace ElastiCache {

void ElastiCacheClientConfiguration::LoadElastiCacheSpecificConfig(const Aws::String& inputProfileName) {
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

ElastiCacheClientConfiguration::ElastiCacheClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadElastiCacheSpecificConfig(this->profileName);
}

ElastiCacheClientConfiguration::ElastiCacheClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadElastiCacheSpecificConfig(Aws::String(inputProfileName));
}

ElastiCacheClientConfiguration::ElastiCacheClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadElastiCacheSpecificConfig(this->profileName);
}

ElastiCacheClientConfiguration::ElastiCacheClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadElastiCacheSpecificConfig(this->profileName);
}

}  // namespace ElastiCache
}  // namespace Aws

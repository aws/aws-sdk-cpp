/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/ElasticLoadBalancingClientConfiguration.h>

namespace Aws {
namespace ElasticLoadBalancing {

void ElasticLoadBalancingClientConfiguration::LoadElasticLoadBalancingSpecificConfig(const Aws::String& inputProfileName) {
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

ElasticLoadBalancingClientConfiguration::ElasticLoadBalancingClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadElasticLoadBalancingSpecificConfig(this->profileName);
}

ElasticLoadBalancingClientConfiguration::ElasticLoadBalancingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadElasticLoadBalancingSpecificConfig(Aws::String(inputProfileName));
}

ElasticLoadBalancingClientConfiguration::ElasticLoadBalancingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadElasticLoadBalancingSpecificConfig(this->profileName);
}

ElasticLoadBalancingClientConfiguration::ElasticLoadBalancingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadElasticLoadBalancingSpecificConfig(this->profileName);
}

}  // namespace ElasticLoadBalancing
}  // namespace Aws

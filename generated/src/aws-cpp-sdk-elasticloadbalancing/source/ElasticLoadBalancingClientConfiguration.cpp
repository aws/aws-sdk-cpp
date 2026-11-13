/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/ElasticLoadBalancingClientConfiguration.h>

namespace Aws {
namespace ElasticLoadBalancing {

void ElasticLoadBalancingClientConfiguration::LoadElasticLoadBalancingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ElasticLoadBalancingClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ElasticLoadBalancing
}  // namespace Aws

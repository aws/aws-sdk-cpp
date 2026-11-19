/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointProvider.h>
#include <aws/elasticloadbalancing/internal/ElasticLoadBalancingEndpointRules.h>

namespace Aws {
#ifndef AWS_ELASTICLOADBALANCING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientConfiguration,
                                                   ElasticLoadBalancing::Endpoint::ElasticLoadBalancingBuiltInParameters,
                                                   ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientConfiguration,
                                                  ElasticLoadBalancing::Endpoint::ElasticLoadBalancingBuiltInParameters,
                                                  ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ElasticLoadBalancing {
namespace Endpoint {
ElasticLoadBalancingEndpointProvider::ElasticLoadBalancingEndpointProvider()
    : ElasticLoadBalancingDefaultEpProviderBase(Aws::ElasticLoadBalancing::ElasticLoadBalancingEndpointRules::GetRulesBlob(),
                                                Aws::ElasticLoadBalancing::ElasticLoadBalancingEndpointRules::RulesBlobSize) {}

void ElasticLoadBalancingBuiltInParameters::SetFromClientConfiguration(const ElasticLoadBalancingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ElasticLoadBalancingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ElasticLoadBalancingBuiltInParameters::SetFromClientConfiguration(const ElasticLoadBalancingClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ElasticLoadBalancingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ElasticLoadBalancingBuiltInParameters::SetServiceSpecificParameters(const ElasticLoadBalancingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ElasticLoadBalancing
}  // namespace Aws

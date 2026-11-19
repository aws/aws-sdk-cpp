/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2EndpointProvider.h>
#include <aws/elasticloadbalancingv2/internal/ElasticLoadBalancingv2EndpointRules.h>

namespace Aws {
#ifndef AWS_ELASTICLOADBALANCINGV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientConfiguration,
                                                   ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2BuiltInParameters,
                                                   ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientConfiguration,
                                                  ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2BuiltInParameters,
                                                  ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ElasticLoadBalancingv2 {
namespace Endpoint {
ElasticLoadBalancingv2EndpointProvider::ElasticLoadBalancingv2EndpointProvider()
    : ElasticLoadBalancingv2DefaultEpProviderBase(Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2EndpointRules::GetRulesBlob(),
                                                  Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2EndpointRules::RulesBlobSize) {}

void ElasticLoadBalancingv2BuiltInParameters::SetFromClientConfiguration(const ElasticLoadBalancingv2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ElasticLoadBalancingv2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ElasticLoadBalancingv2BuiltInParameters::SetFromClientConfiguration(const ElasticLoadBalancingv2ClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ElasticLoadBalancingv2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ElasticLoadBalancingv2BuiltInParameters::SetServiceSpecificParameters(const ElasticLoadBalancingv2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws

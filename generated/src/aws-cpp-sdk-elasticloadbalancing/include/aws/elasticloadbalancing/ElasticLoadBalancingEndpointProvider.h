/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingClientConfiguration.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>

namespace Aws {
namespace ElasticLoadBalancing {
namespace Endpoint {
using ElasticLoadBalancingClientConfiguration = Aws::ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElasticLoadBalancingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ELASTICLOADBALANCING_API ElasticLoadBalancingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ElasticLoadBalancingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ElasticLoadBalancingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ElasticLoadBalancingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ElasticLoadBalancingClientConfiguration& config);
};

/**
 * The type for the ElasticLoadBalancing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticLoadBalancingEndpointProviderBase =
    EndpointProviderBase<ElasticLoadBalancingClientConfiguration, ElasticLoadBalancingBuiltInParameters,
                         ElasticLoadBalancingClientContextParameters>;

using ElasticLoadBalancingDefaultEpProviderBase =
    BDDEndpointProvider<ElasticLoadBalancingClientConfiguration, ElasticLoadBalancingBuiltInParameters,
                        ElasticLoadBalancingClientContextParameters>;

}  // namespace Endpoint
}  // namespace ElasticLoadBalancing

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ELASTICLOADBALANCING_EXTERN template class AWS_ELASTICLOADBALANCING_API
    Aws::Endpoint::EndpointProviderBase<ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientConfiguration,
                                        ElasticLoadBalancing::Endpoint::ElasticLoadBalancingBuiltInParameters,
                                        ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientContextParameters>;

AWS_ELASTICLOADBALANCING_EXTERN template class AWS_ELASTICLOADBALANCING_API
    Aws::Endpoint::BDDEndpointProvider<ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientConfiguration,
                                       ElasticLoadBalancing::Endpoint::ElasticLoadBalancingBuiltInParameters,
                                       ElasticLoadBalancing::Endpoint::ElasticLoadBalancingClientContextParameters>;
}  // namespace Endpoint

namespace ElasticLoadBalancing {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICLOADBALANCING_API ElasticLoadBalancingEndpointProvider : public ElasticLoadBalancingDefaultEpProviderBase {
 public:
  using ElasticLoadBalancingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElasticLoadBalancingEndpointProvider();

  ~ElasticLoadBalancingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElasticLoadBalancing
}  // namespace Aws

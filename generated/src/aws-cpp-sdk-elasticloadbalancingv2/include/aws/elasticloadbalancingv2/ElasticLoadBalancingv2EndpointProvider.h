/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ClientConfiguration.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Endpoint {
using ElasticLoadBalancingv2ClientConfiguration = Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElasticLoadBalancingv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ElasticLoadBalancingv2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ElasticLoadBalancingv2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ElasticLoadBalancingv2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ElasticLoadBalancingv2ClientConfiguration& config);
};

/**
 * The type for the ElasticLoadBalancingv2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticLoadBalancingv2EndpointProviderBase =
    EndpointProviderBase<ElasticLoadBalancingv2ClientConfiguration, ElasticLoadBalancingv2BuiltInParameters,
                         ElasticLoadBalancingv2ClientContextParameters>;

using ElasticLoadBalancingv2DefaultEpProviderBase =
    BDDEndpointProvider<ElasticLoadBalancingv2ClientConfiguration, ElasticLoadBalancingv2BuiltInParameters,
                        ElasticLoadBalancingv2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace ElasticLoadBalancingv2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ELASTICLOADBALANCINGV2_EXTERN template class AWS_ELASTICLOADBALANCINGV2_API
    Aws::Endpoint::EndpointProviderBase<ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientConfiguration,
                                        ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2BuiltInParameters,
                                        ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientContextParameters>;

AWS_ELASTICLOADBALANCINGV2_EXTERN template class AWS_ELASTICLOADBALANCINGV2_API
    Aws::Endpoint::BDDEndpointProvider<ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientConfiguration,
                                       ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2BuiltInParameters,
                                       ElasticLoadBalancingv2::Endpoint::ElasticLoadBalancingv2ClientContextParameters>;
}  // namespace Endpoint

namespace ElasticLoadBalancingv2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2EndpointProvider : public ElasticLoadBalancingv2DefaultEpProviderBase {
 public:
  using ElasticLoadBalancingv2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElasticLoadBalancingv2EndpointProvider();

  ~ElasticLoadBalancingv2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws

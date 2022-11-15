/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2EndpointRules.h>


namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ElasticLoadBalancingv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ElasticLoadBalancingv2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ElasticLoadBalancingv2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ElasticLoadBalancingv2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticLoadBalancingv2EndpointProviderBase =
    EndpointProviderBase<ElasticLoadBalancingv2ClientConfiguration, ElasticLoadBalancingv2BuiltInParameters, ElasticLoadBalancingv2ClientContextParameters>;

using ElasticLoadBalancingv2DefaultEpProviderBase =
    DefaultEndpointProvider<ElasticLoadBalancingv2ClientConfiguration, ElasticLoadBalancingv2BuiltInParameters, ElasticLoadBalancingv2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICLOADBALANCINGV2_API ElasticLoadBalancingv2EndpointProvider : public ElasticLoadBalancingv2DefaultEpProviderBase
{
public:
    using ElasticLoadBalancingv2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ElasticLoadBalancingv2EndpointProvider()
      : ElasticLoadBalancingv2DefaultEpProviderBase(Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2EndpointRules::Rules)
    {}

    ~ElasticLoadBalancingv2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ElasticLoadBalancingv2
} // namespace Aws

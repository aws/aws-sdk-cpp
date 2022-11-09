/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointRules.h>


namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ElasticLoadBalancingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ElasticLoadBalancingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ElasticLoadBalancingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ElasticLoadBalancing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElasticLoadBalancingEndpointProviderBase =
    EndpointProviderBase<ElasticLoadBalancingClientConfiguration, ElasticLoadBalancingBuiltInParameters, ElasticLoadBalancingClientContextParameters>;

using ElasticLoadBalancingDefaultEpProviderBase =
    DefaultEndpointProvider<ElasticLoadBalancingClientConfiguration, ElasticLoadBalancingBuiltInParameters, ElasticLoadBalancingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICLOADBALANCING_API ElasticLoadBalancingEndpointProvider : public ElasticLoadBalancingDefaultEpProviderBase
{
public:
    using ElasticLoadBalancingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ElasticLoadBalancingEndpointProvider()
      : ElasticLoadBalancingDefaultEpProviderBase(Aws::ElasticLoadBalancing::ElasticLoadBalancingEndpointRules::Rules)
    {}

    ~ElasticLoadBalancingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ElasticLoadBalancing
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElasticLoadBalancingClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElasticLoadBalancingBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElasticLoadBalancingEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElasticLoadBalancingEndpointProvider,
                                                                        ElasticLoadBalancingBuiltInParameters,
                                                                        ElasticLoadBalancingClientContextParameters>;


class ElasticLoadBalancingEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElasticLoadBalancingResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElasticLoadBalancingEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElasticLoadBalancing::ElasticLoadBalancingEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElasticLoadBalancingResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElasticLoadBalancingEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElasticLoadBalancingEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElasticLoadBalancing
} // namespace Aws

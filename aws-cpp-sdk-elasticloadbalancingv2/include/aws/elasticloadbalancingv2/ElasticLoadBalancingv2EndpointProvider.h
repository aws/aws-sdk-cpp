/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElasticLoadBalancingv2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElasticLoadBalancingv2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElasticLoadBalancingv2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElasticLoadBalancingv2EndpointProvider,
                                                                        ElasticLoadBalancingv2BuiltInParameters,
                                                                        ElasticLoadBalancingv2ClientContextParameters>;


class ElasticLoadBalancingv2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElasticLoadBalancingv2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElasticLoadBalancingv2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElasticLoadBalancingv2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElasticLoadBalancingv2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElasticLoadBalancingv2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElasticLoadBalancingv2
} // namespace Aws

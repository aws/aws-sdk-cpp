/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53resolver/Route53ResolverEndpointRules.h>


namespace Aws
{
namespace Route53Resolver
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Route53ResolverClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Route53ResolverBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Route53ResolverEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Route53ResolverEndpointProvider,
                                                                        Route53ResolverBuiltInParameters,
                                                                        Route53ResolverClientContextParameters>;


class Route53ResolverEndpointProvider : public DefaultEndpointProviderT
{
public:
    using Route53ResolverResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Route53ResolverEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Route53Resolver::Route53ResolverEndpointRules::Rules),
        clientConfiguration(config)
    {}

    Route53ResolverResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Route53ResolverEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Route53ResolverEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Route53Resolver
} // namespace Aws

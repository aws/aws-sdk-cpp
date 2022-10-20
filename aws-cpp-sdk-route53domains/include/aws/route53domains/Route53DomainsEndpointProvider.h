/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53domains/Route53DomainsEndpointRules.h>


namespace Aws
{
namespace Route53Domains
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Route53DomainsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Route53DomainsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Route53DomainsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Route53DomainsEndpointProvider,
                                                                        Route53DomainsBuiltInParameters,
                                                                        Route53DomainsClientContextParameters>;


class Route53DomainsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using Route53DomainsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Route53DomainsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Route53Domains::Route53DomainsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    Route53DomainsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Route53DomainsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Route53DomainsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Route53Domains
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointRules.h>


namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MarketplaceCommerceAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MarketplaceCommerceAnalyticsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MarketplaceCommerceAnalyticsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MarketplaceCommerceAnalyticsEndpointProvider,
                                                                        MarketplaceCommerceAnalyticsBuiltInParameters,
                                                                        MarketplaceCommerceAnalyticsClientContextParameters>;


class MarketplaceCommerceAnalyticsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MarketplaceCommerceAnalyticsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MarketplaceCommerceAnalyticsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MarketplaceCommerceAnalyticsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MarketplaceCommerceAnalyticsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MarketplaceCommerceAnalyticsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws

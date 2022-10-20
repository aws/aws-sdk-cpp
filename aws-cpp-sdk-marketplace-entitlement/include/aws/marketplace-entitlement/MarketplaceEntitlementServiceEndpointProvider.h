/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceEndpointRules.h>


namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MarketplaceEntitlementServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MarketplaceEntitlementServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MarketplaceEntitlementServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MarketplaceEntitlementServiceEndpointProvider,
                                                                        MarketplaceEntitlementServiceBuiltInParameters,
                                                                        MarketplaceEntitlementServiceClientContextParameters>;


class MarketplaceEntitlementServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MarketplaceEntitlementServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MarketplaceEntitlementServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MarketplaceEntitlementServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MarketplaceEntitlementServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MarketplaceEntitlementServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MarketplaceEntitlementService
} // namespace Aws

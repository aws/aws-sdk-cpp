/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/meteringmarketplace/MarketplaceMeteringEndpointRules.h>


namespace Aws
{
namespace MarketplaceMetering
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MarketplaceMeteringClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MarketplaceMeteringBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MarketplaceMeteringEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MarketplaceMeteringEndpointProvider,
                                                                        MarketplaceMeteringBuiltInParameters,
                                                                        MarketplaceMeteringClientContextParameters>;


class MarketplaceMeteringEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MarketplaceMeteringResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MarketplaceMeteringEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MarketplaceMetering::MarketplaceMeteringEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MarketplaceMeteringResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MarketplaceMeteringEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MarketplaceMeteringEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MarketplaceMetering
} // namespace Aws

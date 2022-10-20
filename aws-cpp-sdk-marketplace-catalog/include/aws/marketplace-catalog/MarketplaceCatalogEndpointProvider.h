/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/marketplace-catalog/MarketplaceCatalogEndpointRules.h>


namespace Aws
{
namespace MarketplaceCatalog
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MarketplaceCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MarketplaceCatalogBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MarketplaceCatalogEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MarketplaceCatalogEndpointProvider,
                                                                        MarketplaceCatalogBuiltInParameters,
                                                                        MarketplaceCatalogClientContextParameters>;


class MarketplaceCatalogEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MarketplaceCatalogResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MarketplaceCatalogEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MarketplaceCatalog::MarketplaceCatalogEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MarketplaceCatalogResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MarketplaceCatalogEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MarketplaceCatalogEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MarketplaceCatalog
} // namespace Aws

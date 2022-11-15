/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MarketplaceCatalogClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceCatalogClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MarketplaceCatalogBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceCatalog Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceCatalogEndpointProviderBase =
    EndpointProviderBase<MarketplaceCatalogClientConfiguration, MarketplaceCatalogBuiltInParameters, MarketplaceCatalogClientContextParameters>;

using MarketplaceCatalogDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceCatalogClientConfiguration, MarketplaceCatalogBuiltInParameters, MarketplaceCatalogClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACECATALOG_API MarketplaceCatalogEndpointProvider : public MarketplaceCatalogDefaultEpProviderBase
{
public:
    using MarketplaceCatalogResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MarketplaceCatalogEndpointProvider()
      : MarketplaceCatalogDefaultEpProviderBase(Aws::MarketplaceCatalog::MarketplaceCatalogEndpointRules::Rules)
    {}

    ~MarketplaceCatalogEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MarketplaceCatalog
} // namespace Aws

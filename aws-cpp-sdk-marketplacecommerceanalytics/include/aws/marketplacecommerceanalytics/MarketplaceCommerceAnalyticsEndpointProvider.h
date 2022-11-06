/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MarketplaceCommerceAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceCommerceAnalyticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MarketplaceCommerceAnalyticsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceCommerceAnalytics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceCommerceAnalyticsEndpointProviderBase =
    EndpointProviderBase<MarketplaceCommerceAnalyticsClientConfiguration, MarketplaceCommerceAnalyticsBuiltInParameters, MarketplaceCommerceAnalyticsClientContextParameters>;

using MarketplaceCommerceAnalyticsDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceCommerceAnalyticsClientConfiguration, MarketplaceCommerceAnalyticsBuiltInParameters, MarketplaceCommerceAnalyticsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACECOMMERCEANALYTICS_API MarketplaceCommerceAnalyticsEndpointProvider : public MarketplaceCommerceAnalyticsDefaultEpProviderBase
{
public:
    using MarketplaceCommerceAnalyticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MarketplaceCommerceAnalyticsEndpointProvider()
      : MarketplaceCommerceAnalyticsDefaultEpProviderBase(Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsEndpointRules::Rules)
    {}

    ~MarketplaceCommerceAnalyticsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws

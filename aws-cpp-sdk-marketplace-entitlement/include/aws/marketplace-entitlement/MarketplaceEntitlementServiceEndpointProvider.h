/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MarketplaceEntitlementServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceEntitlementServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MarketplaceEntitlementServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceEntitlementService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceEntitlementServiceEndpointProviderBase =
    EndpointProviderBase<MarketplaceEntitlementServiceClientConfiguration, MarketplaceEntitlementServiceBuiltInParameters, MarketplaceEntitlementServiceClientContextParameters>;

using MarketplaceEntitlementServiceDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceEntitlementServiceClientConfiguration, MarketplaceEntitlementServiceBuiltInParameters, MarketplaceEntitlementServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEENTITLEMENTSERVICE_API MarketplaceEntitlementServiceEndpointProvider : public MarketplaceEntitlementServiceDefaultEpProviderBase
{
public:
    using MarketplaceEntitlementServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MarketplaceEntitlementServiceEndpointProvider()
      : MarketplaceEntitlementServiceDefaultEpProviderBase(Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceEndpointRules::Rules)
    {}

    ~MarketplaceEntitlementServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MarketplaceEntitlementService
} // namespace Aws

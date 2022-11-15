/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MarketplaceMeteringClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MarketplaceMeteringClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MarketplaceMeteringBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MarketplaceMetering Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MarketplaceMeteringEndpointProviderBase =
    EndpointProviderBase<MarketplaceMeteringClientConfiguration, MarketplaceMeteringBuiltInParameters, MarketplaceMeteringClientContextParameters>;

using MarketplaceMeteringDefaultEpProviderBase =
    DefaultEndpointProvider<MarketplaceMeteringClientConfiguration, MarketplaceMeteringBuiltInParameters, MarketplaceMeteringClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MARKETPLACEMETERING_API MarketplaceMeteringEndpointProvider : public MarketplaceMeteringDefaultEpProviderBase
{
public:
    using MarketplaceMeteringResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MarketplaceMeteringEndpointProvider()
      : MarketplaceMeteringDefaultEpProviderBase(Aws::MarketplaceMetering::MarketplaceMeteringEndpointRules::Rules)
    {}

    ~MarketplaceMeteringEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MarketplaceMetering
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pricing/PricingEndpointRules.h>


namespace Aws
{
namespace Pricing
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PricingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PricingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PricingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Pricing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PricingEndpointProviderBase =
    EndpointProviderBase<PricingClientConfiguration, PricingBuiltInParameters, PricingClientContextParameters>;

using PricingDefaultEpProviderBase =
    DefaultEndpointProvider<PricingClientConfiguration, PricingBuiltInParameters, PricingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PRICING_API PricingEndpointProvider : public PricingDefaultEpProviderBase
{
public:
    using PricingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PricingEndpointProvider()
      : PricingDefaultEpProviderBase(Aws::Pricing::PricingEndpointRules::Rules)
    {}

    ~PricingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Pricing
} // namespace Aws

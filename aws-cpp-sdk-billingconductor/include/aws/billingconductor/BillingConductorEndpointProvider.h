/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/billingconductor/BillingConductorEndpointRules.h>


namespace Aws
{
namespace BillingConductor
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BillingConductorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BillingConductorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BillingConductorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BillingConductor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BillingConductorEndpointProviderBase =
    EndpointProviderBase<BillingConductorClientConfiguration, BillingConductorBuiltInParameters, BillingConductorClientContextParameters>;

using BillingConductorDefaultEpProviderBase =
    DefaultEndpointProvider<BillingConductorClientConfiguration, BillingConductorBuiltInParameters, BillingConductorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BILLINGCONDUCTOR_API BillingConductorEndpointProvider : public BillingConductorDefaultEpProviderBase
{
public:
    using BillingConductorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BillingConductorEndpointProvider()
      : BillingConductorDefaultEpProviderBase(Aws::BillingConductor::BillingConductorEndpointRules::Rules)
    {}

    ~BillingConductorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BillingConductor
} // namespace Aws

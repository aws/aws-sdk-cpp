/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/billing/BillingEndpointRules.h>


namespace Aws
{
namespace Billing
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BillingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BillingClientConfiguration = Aws::Client::GenericClientConfiguration;
using BillingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Billing Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BillingEndpointProviderBase =
    EndpointProviderBase<BillingClientConfiguration, BillingBuiltInParameters, BillingClientContextParameters>;

using BillingDefaultEpProviderBase =
    DefaultEndpointProvider<BillingClientConfiguration, BillingBuiltInParameters, BillingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BILLING_API BillingEndpointProvider : public BillingDefaultEpProviderBase
{
public:
    using BillingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BillingEndpointProvider()
      : BillingDefaultEpProviderBase(Aws::Billing::BillingEndpointRules::GetRulesBlob(), Aws::Billing::BillingEndpointRules::RulesBlobSize)
    {}

    ~BillingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Billing
} // namespace Aws

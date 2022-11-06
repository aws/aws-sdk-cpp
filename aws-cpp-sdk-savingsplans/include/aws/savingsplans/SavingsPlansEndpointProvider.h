/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/savingsplans/SavingsPlansEndpointRules.h>


namespace Aws
{
namespace SavingsPlans
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SavingsPlansClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SavingsPlansClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SavingsPlansBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SavingsPlans Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SavingsPlansEndpointProviderBase =
    EndpointProviderBase<SavingsPlansClientConfiguration, SavingsPlansBuiltInParameters, SavingsPlansClientContextParameters>;

using SavingsPlansDefaultEpProviderBase =
    DefaultEndpointProvider<SavingsPlansClientConfiguration, SavingsPlansBuiltInParameters, SavingsPlansClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAVINGSPLANS_API SavingsPlansEndpointProvider : public SavingsPlansDefaultEpProviderBase
{
public:
    using SavingsPlansResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SavingsPlansEndpointProvider()
      : SavingsPlansDefaultEpProviderBase(Aws::SavingsPlans::SavingsPlansEndpointRules::Rules)
    {}

    ~SavingsPlansEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SavingsPlans
} // namespace Aws

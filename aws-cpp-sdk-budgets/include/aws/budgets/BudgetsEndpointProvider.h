/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/budgets/BudgetsEndpointRules.h>


namespace Aws
{
namespace Budgets
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BudgetsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BudgetsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using BudgetsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Budgets Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BudgetsEndpointProviderBase =
    EndpointProviderBase<BudgetsClientConfiguration, BudgetsBuiltInParameters, BudgetsClientContextParameters>;

using BudgetsDefaultEpProviderBase =
    DefaultEndpointProvider<BudgetsClientConfiguration, BudgetsBuiltInParameters, BudgetsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BUDGETS_API BudgetsEndpointProvider : public BudgetsDefaultEpProviderBase
{
public:
    using BudgetsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BudgetsEndpointProvider()
      : BudgetsDefaultEpProviderBase(Aws::Budgets::BudgetsEndpointRules::Rules)
    {}

    ~BudgetsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Budgets
} // namespace Aws

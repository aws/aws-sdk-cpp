/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BudgetsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BudgetsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BudgetsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BudgetsEndpointProvider,
                                                                        BudgetsBuiltInParameters,
                                                                        BudgetsClientContextParameters>;


class BudgetsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BudgetsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BudgetsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Budgets::BudgetsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BudgetsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BudgetsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BudgetsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Budgets
} // namespace Aws

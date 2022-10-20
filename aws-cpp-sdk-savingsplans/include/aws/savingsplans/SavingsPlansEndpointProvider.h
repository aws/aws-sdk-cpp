/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SavingsPlansClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SavingsPlansBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SavingsPlansEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SavingsPlansEndpointProvider,
                                                                        SavingsPlansBuiltInParameters,
                                                                        SavingsPlansClientContextParameters>;


class SavingsPlansEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SavingsPlansResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SavingsPlansEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SavingsPlans::SavingsPlansEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SavingsPlansResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SavingsPlansEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SavingsPlansEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SavingsPlans
} // namespace Aws

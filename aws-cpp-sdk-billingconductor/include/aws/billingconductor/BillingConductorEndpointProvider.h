/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using BillingConductorClientContextParameters = Aws::Endpoint::ClientContextParameters;
using BillingConductorBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class BillingConductorEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<BillingConductorEndpointProvider,
                                                                        BillingConductorBuiltInParameters,
                                                                        BillingConductorClientContextParameters>;


class BillingConductorEndpointProvider : public DefaultEndpointProviderT
{
public:
    using BillingConductorResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    BillingConductorEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::BillingConductor::BillingConductorEndpointRules::Rules),
        clientConfiguration(config)
    {}

    BillingConductorResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<BillingConductorEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~BillingConductorEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace BillingConductor
} // namespace Aws

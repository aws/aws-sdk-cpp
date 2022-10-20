/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PricingClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PricingBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PricingEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PricingEndpointProvider,
                                                                        PricingBuiltInParameters,
                                                                        PricingClientContextParameters>;


class PricingEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PricingResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PricingEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Pricing::PricingEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PricingResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PricingEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PricingEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Pricing
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/resiliencehub/ResilienceHubEndpointRules.h>


namespace Aws
{
namespace ResilienceHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ResilienceHubClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ResilienceHubBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ResilienceHubEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ResilienceHubEndpointProvider,
                                                                        ResilienceHubBuiltInParameters,
                                                                        ResilienceHubClientContextParameters>;


class ResilienceHubEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ResilienceHubResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ResilienceHubEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ResilienceHub::ResilienceHubEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ResilienceHubResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ResilienceHubEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ResilienceHubEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ResilienceHub
} // namespace Aws

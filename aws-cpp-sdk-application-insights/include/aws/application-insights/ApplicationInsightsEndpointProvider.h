/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/application-insights/ApplicationInsightsEndpointRules.h>


namespace Aws
{
namespace ApplicationInsights
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ApplicationInsightsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ApplicationInsightsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ApplicationInsightsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ApplicationInsightsEndpointProvider,
                                                                        ApplicationInsightsBuiltInParameters,
                                                                        ApplicationInsightsClientContextParameters>;


class ApplicationInsightsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ApplicationInsightsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ApplicationInsightsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ApplicationInsights::ApplicationInsightsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ApplicationInsightsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ApplicationInsightsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ApplicationInsightsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ApplicationInsights
} // namespace Aws

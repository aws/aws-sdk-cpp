/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/forecastquery/ForecastQueryServiceEndpointRules.h>


namespace Aws
{
namespace ForecastQueryService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ForecastQueryServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ForecastQueryServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ForecastQueryServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ForecastQueryServiceEndpointProvider,
                                                                        ForecastQueryServiceBuiltInParameters,
                                                                        ForecastQueryServiceClientContextParameters>;


class ForecastQueryServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ForecastQueryServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ForecastQueryServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ForecastQueryService::ForecastQueryServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ForecastQueryServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ForecastQueryServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ForecastQueryServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ForecastQueryService
} // namespace Aws

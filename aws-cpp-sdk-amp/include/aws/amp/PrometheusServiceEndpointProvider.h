/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amp/PrometheusServiceEndpointRules.h>


namespace Aws
{
namespace PrometheusService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PrometheusServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PrometheusServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PrometheusServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PrometheusServiceEndpointProvider,
                                                                        PrometheusServiceBuiltInParameters,
                                                                        PrometheusServiceClientContextParameters>;


class PrometheusServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PrometheusServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PrometheusServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PrometheusService::PrometheusServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PrometheusServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PrometheusServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PrometheusServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PrometheusService
} // namespace Aws

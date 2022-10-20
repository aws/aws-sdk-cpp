/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lookoutmetrics/LookoutMetricsEndpointRules.h>


namespace Aws
{
namespace LookoutMetrics
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LookoutMetricsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LookoutMetricsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LookoutMetricsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LookoutMetricsEndpointProvider,
                                                                        LookoutMetricsBuiltInParameters,
                                                                        LookoutMetricsClientContextParameters>;


class LookoutMetricsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LookoutMetricsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LookoutMetricsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LookoutMetrics::LookoutMetricsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LookoutMetricsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LookoutMetricsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LookoutMetricsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LookoutMetrics
} // namespace Aws

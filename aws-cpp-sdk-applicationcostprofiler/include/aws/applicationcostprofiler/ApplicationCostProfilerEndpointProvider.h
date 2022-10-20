/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointRules.h>


namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ApplicationCostProfilerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ApplicationCostProfilerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ApplicationCostProfilerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ApplicationCostProfilerEndpointProvider,
                                                                        ApplicationCostProfilerBuiltInParameters,
                                                                        ApplicationCostProfilerClientContextParameters>;


class ApplicationCostProfilerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ApplicationCostProfilerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ApplicationCostProfilerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ApplicationCostProfiler::ApplicationCostProfilerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ApplicationCostProfilerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ApplicationCostProfilerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ApplicationCostProfilerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ApplicationCostProfiler
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cur/CostandUsageReportServiceEndpointRules.h>


namespace Aws
{
namespace CostandUsageReportService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CostandUsageReportServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CostandUsageReportServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CostandUsageReportServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CostandUsageReportServiceEndpointProvider,
                                                                        CostandUsageReportServiceBuiltInParameters,
                                                                        CostandUsageReportServiceClientContextParameters>;


class CostandUsageReportServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CostandUsageReportServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CostandUsageReportServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CostandUsageReportService::CostandUsageReportServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CostandUsageReportServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CostandUsageReportServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CostandUsageReportServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CostandUsageReportService
} // namespace Aws

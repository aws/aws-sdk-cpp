/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/logs/CloudWatchLogsEndpointRules.h>


namespace Aws
{
namespace CloudWatchLogs
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CloudWatchLogsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CloudWatchLogsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CloudWatchLogsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CloudWatchLogsEndpointProvider,
                                                                        CloudWatchLogsBuiltInParameters,
                                                                        CloudWatchLogsClientContextParameters>;


class CloudWatchLogsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CloudWatchLogsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CloudWatchLogsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CloudWatchLogsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CloudWatchLogsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CloudWatchLogsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CloudWatchLogs
} // namespace Aws

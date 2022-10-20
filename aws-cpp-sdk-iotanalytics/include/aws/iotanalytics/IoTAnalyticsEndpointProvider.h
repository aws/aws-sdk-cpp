/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotanalytics/IoTAnalyticsEndpointRules.h>


namespace Aws
{
namespace IoTAnalytics
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTAnalyticsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTAnalyticsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTAnalyticsEndpointProvider,
                                                                        IoTAnalyticsBuiltInParameters,
                                                                        IoTAnalyticsClientContextParameters>;


class IoTAnalyticsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTAnalyticsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTAnalyticsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTAnalytics::IoTAnalyticsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTAnalyticsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTAnalyticsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTAnalyticsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTAnalytics
} // namespace Aws

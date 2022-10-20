/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotevents-data/IoTEventsDataEndpointRules.h>


namespace Aws
{
namespace IoTEventsData
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTEventsDataClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTEventsDataBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTEventsDataEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTEventsDataEndpointProvider,
                                                                        IoTEventsDataBuiltInParameters,
                                                                        IoTEventsDataClientContextParameters>;


class IoTEventsDataEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTEventsDataResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTEventsDataEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTEventsData::IoTEventsDataEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTEventsDataResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTEventsDataEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTEventsDataEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTEventsData
} // namespace Aws

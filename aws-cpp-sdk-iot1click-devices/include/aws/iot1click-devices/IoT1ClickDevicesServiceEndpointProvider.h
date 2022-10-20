/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpointRules.h>


namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoT1ClickDevicesServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoT1ClickDevicesServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoT1ClickDevicesServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoT1ClickDevicesServiceEndpointProvider,
                                                                        IoT1ClickDevicesServiceBuiltInParameters,
                                                                        IoT1ClickDevicesServiceClientContextParameters>;


class IoT1ClickDevicesServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoT1ClickDevicesServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoT1ClickDevicesServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoT1ClickDevicesServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoT1ClickDevicesServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoT1ClickDevicesServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoT1ClickDevicesService
} // namespace Aws

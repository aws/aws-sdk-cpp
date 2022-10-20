/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointRules.h>


namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTDeviceAdvisorClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTDeviceAdvisorBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTDeviceAdvisorEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTDeviceAdvisorEndpointProvider,
                                                                        IoTDeviceAdvisorBuiltInParameters,
                                                                        IoTDeviceAdvisorClientContextParameters>;


class IoTDeviceAdvisorEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTDeviceAdvisorResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTDeviceAdvisorEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTDeviceAdvisor::IoTDeviceAdvisorEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTDeviceAdvisorResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTDeviceAdvisorEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTDeviceAdvisorEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTDeviceAdvisor
} // namespace Aws

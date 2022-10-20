/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot-data/IoTDataPlaneEndpointRules.h>


namespace Aws
{
namespace IoTDataPlane
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTDataPlaneClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTDataPlaneBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTDataPlaneEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTDataPlaneEndpointProvider,
                                                                        IoTDataPlaneBuiltInParameters,
                                                                        IoTDataPlaneClientContextParameters>;


class IoTDataPlaneEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTDataPlaneResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTDataPlaneEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTDataPlane::IoTDataPlaneEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTDataPlaneResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTDataPlaneEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTDataPlaneEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTDataPlane
} // namespace Aws

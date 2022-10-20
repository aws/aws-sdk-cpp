/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotfleetwise/IoTFleetWiseEndpointRules.h>


namespace Aws
{
namespace IoTFleetWise
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTFleetWiseClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTFleetWiseBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTFleetWiseEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTFleetWiseEndpointProvider,
                                                                        IoTFleetWiseBuiltInParameters,
                                                                        IoTFleetWiseClientContextParameters>;


class IoTFleetWiseEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTFleetWiseResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTFleetWiseEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTFleetWise::IoTFleetWiseEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTFleetWiseResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTFleetWiseEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTFleetWiseEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTFleetWise
} // namespace Aws

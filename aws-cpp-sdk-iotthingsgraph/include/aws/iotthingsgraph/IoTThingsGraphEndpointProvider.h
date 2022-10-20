/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotthingsgraph/IoTThingsGraphEndpointRules.h>


namespace Aws
{
namespace IoTThingsGraph
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTThingsGraphClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTThingsGraphBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTThingsGraphEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTThingsGraphEndpointProvider,
                                                                        IoTThingsGraphBuiltInParameters,
                                                                        IoTThingsGraphClientContextParameters>;


class IoTThingsGraphEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTThingsGraphResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTThingsGraphEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTThingsGraph::IoTThingsGraphEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTThingsGraphResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTThingsGraphEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTThingsGraphEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTThingsGraph
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iottwinmaker/IoTTwinMakerEndpointRules.h>


namespace Aws
{
namespace IoTTwinMaker
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTTwinMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTTwinMakerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTTwinMakerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTTwinMakerEndpointProvider,
                                                                        IoTTwinMakerBuiltInParameters,
                                                                        IoTTwinMakerClientContextParameters>;


class IoTTwinMakerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTTwinMakerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTTwinMakerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTTwinMaker::IoTTwinMakerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTTwinMakerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTTwinMakerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTTwinMakerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTTwinMaker
} // namespace Aws

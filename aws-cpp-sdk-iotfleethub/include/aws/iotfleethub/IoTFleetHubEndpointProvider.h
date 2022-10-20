/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotfleethub/IoTFleetHubEndpointRules.h>


namespace Aws
{
namespace IoTFleetHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IoTFleetHubClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IoTFleetHubBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IoTFleetHubEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IoTFleetHubEndpointProvider,
                                                                        IoTFleetHubBuiltInParameters,
                                                                        IoTFleetHubClientContextParameters>;


class IoTFleetHubEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IoTFleetHubResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IoTFleetHubEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IoTFleetHub::IoTFleetHubEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IoTFleetHubResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IoTFleetHubEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IoTFleetHubEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IoTFleetHub
} // namespace Aws

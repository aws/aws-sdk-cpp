/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/devicefarm/DeviceFarmEndpointRules.h>


namespace Aws
{
namespace DeviceFarm
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DeviceFarmClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DeviceFarmBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DeviceFarmEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DeviceFarmEndpointProvider,
                                                                        DeviceFarmBuiltInParameters,
                                                                        DeviceFarmClientContextParameters>;


class DeviceFarmEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DeviceFarmResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DeviceFarmEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DeviceFarm::DeviceFarmEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DeviceFarmResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DeviceFarmEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DeviceFarmEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DeviceFarm
} // namespace Aws

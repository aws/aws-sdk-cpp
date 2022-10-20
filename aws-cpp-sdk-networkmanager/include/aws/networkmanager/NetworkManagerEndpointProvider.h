/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/networkmanager/NetworkManagerEndpointRules.h>


namespace Aws
{
namespace NetworkManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using NetworkManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using NetworkManagerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class NetworkManagerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<NetworkManagerEndpointProvider,
                                                                        NetworkManagerBuiltInParameters,
                                                                        NetworkManagerClientContextParameters>;


class NetworkManagerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using NetworkManagerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    NetworkManagerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::NetworkManager::NetworkManagerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    NetworkManagerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<NetworkManagerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~NetworkManagerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace NetworkManager
} // namespace Aws

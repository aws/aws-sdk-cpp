/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/network-firewall/NetworkFirewallEndpointRules.h>


namespace Aws
{
namespace NetworkFirewall
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using NetworkFirewallClientContextParameters = Aws::Endpoint::ClientContextParameters;
using NetworkFirewallBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class NetworkFirewallEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<NetworkFirewallEndpointProvider,
                                                                        NetworkFirewallBuiltInParameters,
                                                                        NetworkFirewallClientContextParameters>;


class NetworkFirewallEndpointProvider : public DefaultEndpointProviderT
{
public:
    using NetworkFirewallResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    NetworkFirewallEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::NetworkFirewall::NetworkFirewallEndpointRules::Rules),
        clientConfiguration(config)
    {}

    NetworkFirewallResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<NetworkFirewallEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~NetworkFirewallEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace NetworkFirewall
} // namespace Aws

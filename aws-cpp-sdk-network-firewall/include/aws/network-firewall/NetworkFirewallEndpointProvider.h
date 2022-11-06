/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NetworkFirewallClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NetworkFirewallClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using NetworkFirewallBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the NetworkFirewall Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NetworkFirewallEndpointProviderBase =
    EndpointProviderBase<NetworkFirewallClientConfiguration, NetworkFirewallBuiltInParameters, NetworkFirewallClientContextParameters>;

using NetworkFirewallDefaultEpProviderBase =
    DefaultEndpointProvider<NetworkFirewallClientConfiguration, NetworkFirewallBuiltInParameters, NetworkFirewallClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NETWORKFIREWALL_API NetworkFirewallEndpointProvider : public NetworkFirewallDefaultEpProviderBase
{
public:
    using NetworkFirewallResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NetworkFirewallEndpointProvider()
      : NetworkFirewallDefaultEpProviderBase(Aws::NetworkFirewall::NetworkFirewallEndpointRules::Rules)
    {}

    ~NetworkFirewallEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace NetworkFirewall
} // namespace Aws

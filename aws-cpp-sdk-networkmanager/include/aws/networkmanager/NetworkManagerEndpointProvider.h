/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using NetworkManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NetworkManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using NetworkManagerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the NetworkManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NetworkManagerEndpointProviderBase =
    EndpointProviderBase<NetworkManagerClientConfiguration, NetworkManagerBuiltInParameters, NetworkManagerClientContextParameters>;

using NetworkManagerDefaultEpProviderBase =
    DefaultEndpointProvider<NetworkManagerClientConfiguration, NetworkManagerBuiltInParameters, NetworkManagerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_NETWORKMANAGER_API NetworkManagerEndpointProvider : public NetworkManagerDefaultEpProviderBase
{
public:
    using NetworkManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    NetworkManagerEndpointProvider()
      : NetworkManagerDefaultEpProviderBase(Aws::NetworkManager::NetworkManagerEndpointRules::Rules)
    {}

    ~NetworkManagerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace NetworkManager
} // namespace Aws

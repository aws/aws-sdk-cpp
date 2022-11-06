/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/privatenetworks/PrivateNetworksEndpointRules.h>


namespace Aws
{
namespace PrivateNetworks
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PrivateNetworksClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PrivateNetworksClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PrivateNetworksBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PrivateNetworks Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PrivateNetworksEndpointProviderBase =
    EndpointProviderBase<PrivateNetworksClientConfiguration, PrivateNetworksBuiltInParameters, PrivateNetworksClientContextParameters>;

using PrivateNetworksDefaultEpProviderBase =
    DefaultEndpointProvider<PrivateNetworksClientConfiguration, PrivateNetworksBuiltInParameters, PrivateNetworksClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PRIVATENETWORKS_API PrivateNetworksEndpointProvider : public PrivateNetworksDefaultEpProviderBase
{
public:
    using PrivateNetworksResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PrivateNetworksEndpointProvider()
      : PrivateNetworksDefaultEpProviderBase(Aws::PrivateNetworks::PrivateNetworksEndpointRules::Rules)
    {}

    ~PrivateNetworksEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PrivateNetworks
} // namespace Aws

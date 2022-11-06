/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/keyspaces/KeyspacesEndpointRules.h>


namespace Aws
{
namespace Keyspaces
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KeyspacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KeyspacesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KeyspacesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Keyspaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KeyspacesEndpointProviderBase =
    EndpointProviderBase<KeyspacesClientConfiguration, KeyspacesBuiltInParameters, KeyspacesClientContextParameters>;

using KeyspacesDefaultEpProviderBase =
    DefaultEndpointProvider<KeyspacesClientConfiguration, KeyspacesBuiltInParameters, KeyspacesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KEYSPACES_API KeyspacesEndpointProvider : public KeyspacesDefaultEpProviderBase
{
public:
    using KeyspacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KeyspacesEndpointProvider()
      : KeyspacesDefaultEpProviderBase(Aws::Keyspaces::KeyspacesEndpointRules::Rules)
    {}

    ~KeyspacesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Keyspaces
} // namespace Aws

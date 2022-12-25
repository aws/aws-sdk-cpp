/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/identitystore/IdentityStoreEndpointRules.h>


namespace Aws
{
namespace IdentityStore
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IdentityStoreClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IdentityStoreClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IdentityStoreBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IdentityStore Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IdentityStoreEndpointProviderBase =
    EndpointProviderBase<IdentityStoreClientConfiguration, IdentityStoreBuiltInParameters, IdentityStoreClientContextParameters>;

using IdentityStoreDefaultEpProviderBase =
    DefaultEndpointProvider<IdentityStoreClientConfiguration, IdentityStoreBuiltInParameters, IdentityStoreClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IDENTITYSTORE_API IdentityStoreEndpointProvider : public IdentityStoreDefaultEpProviderBase
{
public:
    using IdentityStoreResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IdentityStoreEndpointProvider()
      : IdentityStoreDefaultEpProviderBase(Aws::IdentityStore::IdentityStoreEndpointRules::Rules)
    {}

    ~IdentityStoreEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IdentityStore
} // namespace Aws

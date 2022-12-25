/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointRules.h>


namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChimeSDKIdentityClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChimeSDKIdentityClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChimeSDKIdentityBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ChimeSDKIdentity Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKIdentityEndpointProviderBase =
    EndpointProviderBase<ChimeSDKIdentityClientConfiguration, ChimeSDKIdentityBuiltInParameters, ChimeSDKIdentityClientContextParameters>;

using ChimeSDKIdentityDefaultEpProviderBase =
    DefaultEndpointProvider<ChimeSDKIdentityClientConfiguration, ChimeSDKIdentityBuiltInParameters, ChimeSDKIdentityClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKIDENTITY_API ChimeSDKIdentityEndpointProvider : public ChimeSDKIdentityDefaultEpProviderBase
{
public:
    using ChimeSDKIdentityResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChimeSDKIdentityEndpointProvider()
      : ChimeSDKIdentityDefaultEpProviderBase(Aws::ChimeSDKIdentity::ChimeSDKIdentityEndpointRules::Rules)
    {}

    ~ChimeSDKIdentityEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ChimeSDKIdentity
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-messaging/ChimeSDKMessagingEndpointRules.h>


namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChimeSDKMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChimeSDKMessagingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChimeSDKMessagingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ChimeSDKMessaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKMessagingEndpointProviderBase =
    EndpointProviderBase<ChimeSDKMessagingClientConfiguration, ChimeSDKMessagingBuiltInParameters, ChimeSDKMessagingClientContextParameters>;

using ChimeSDKMessagingDefaultEpProviderBase =
    DefaultEndpointProvider<ChimeSDKMessagingClientConfiguration, ChimeSDKMessagingBuiltInParameters, ChimeSDKMessagingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKMESSAGING_API ChimeSDKMessagingEndpointProvider : public ChimeSDKMessagingDefaultEpProviderBase
{
public:
    using ChimeSDKMessagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChimeSDKMessagingEndpointProvider()
      : ChimeSDKMessagingDefaultEpProviderBase(Aws::ChimeSDKMessaging::ChimeSDKMessagingEndpointRules::Rules)
    {}

    ~ChimeSDKMessagingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ChimeSDKMessaging
} // namespace Aws

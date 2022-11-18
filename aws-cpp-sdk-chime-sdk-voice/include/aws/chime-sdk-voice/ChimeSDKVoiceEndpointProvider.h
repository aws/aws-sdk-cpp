/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-voice/ChimeSDKVoiceEndpointRules.h>


namespace Aws
{
namespace ChimeSDKVoice
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ChimeSDKVoiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ChimeSDKVoiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ChimeSDKVoiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ChimeSDKVoice Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ChimeSDKVoiceEndpointProviderBase =
    EndpointProviderBase<ChimeSDKVoiceClientConfiguration, ChimeSDKVoiceBuiltInParameters, ChimeSDKVoiceClientContextParameters>;

using ChimeSDKVoiceDefaultEpProviderBase =
    DefaultEndpointProvider<ChimeSDKVoiceClientConfiguration, ChimeSDKVoiceBuiltInParameters, ChimeSDKVoiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CHIMESDKVOICE_API ChimeSDKVoiceEndpointProvider : public ChimeSDKVoiceDefaultEpProviderBase
{
public:
    using ChimeSDKVoiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ChimeSDKVoiceEndpointProvider()
      : ChimeSDKVoiceDefaultEpProviderBase(Aws::ChimeSDKVoice::ChimeSDKVoiceEndpointRules::Rules)
    {}

    ~ChimeSDKVoiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ChimeSDKVoice
} // namespace Aws

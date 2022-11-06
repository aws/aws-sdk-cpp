/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/voice-id/VoiceIDEndpointRules.h>


namespace Aws
{
namespace VoiceID
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using VoiceIDClientContextParameters = Aws::Endpoint::ClientContextParameters;

using VoiceIDClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using VoiceIDBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the VoiceID Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using VoiceIDEndpointProviderBase =
    EndpointProviderBase<VoiceIDClientConfiguration, VoiceIDBuiltInParameters, VoiceIDClientContextParameters>;

using VoiceIDDefaultEpProviderBase =
    DefaultEndpointProvider<VoiceIDClientConfiguration, VoiceIDBuiltInParameters, VoiceIDClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_VOICEID_API VoiceIDEndpointProvider : public VoiceIDDefaultEpProviderBase
{
public:
    using VoiceIDResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    VoiceIDEndpointProvider()
      : VoiceIDDefaultEpProviderBase(Aws::VoiceID::VoiceIDEndpointRules::Rules)
    {}

    ~VoiceIDEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace VoiceID
} // namespace Aws

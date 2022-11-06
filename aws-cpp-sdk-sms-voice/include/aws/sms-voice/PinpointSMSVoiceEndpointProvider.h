/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sms-voice/PinpointSMSVoiceEndpointRules.h>


namespace Aws
{
namespace PinpointSMSVoice
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PinpointSMSVoiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PinpointSMSVoiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PinpointSMSVoiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PinpointSMSVoice Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PinpointSMSVoiceEndpointProviderBase =
    EndpointProviderBase<PinpointSMSVoiceClientConfiguration, PinpointSMSVoiceBuiltInParameters, PinpointSMSVoiceClientContextParameters>;

using PinpointSMSVoiceDefaultEpProviderBase =
    DefaultEndpointProvider<PinpointSMSVoiceClientConfiguration, PinpointSMSVoiceBuiltInParameters, PinpointSMSVoiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PINPOINTSMSVOICE_API PinpointSMSVoiceEndpointProvider : public PinpointSMSVoiceDefaultEpProviderBase
{
public:
    using PinpointSMSVoiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PinpointSMSVoiceEndpointProvider()
      : PinpointSMSVoiceDefaultEpProviderBase(Aws::PinpointSMSVoice::PinpointSMSVoiceEndpointRules::Rules)
    {}

    ~PinpointSMSVoiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PinpointSMSVoice
} // namespace Aws

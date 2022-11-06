/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2EndpointRules.h>


namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PinpointSMSVoiceV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PinpointSMSVoiceV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PinpointSMSVoiceV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PinpointSMSVoiceV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PinpointSMSVoiceV2EndpointProviderBase =
    EndpointProviderBase<PinpointSMSVoiceV2ClientConfiguration, PinpointSMSVoiceV2BuiltInParameters, PinpointSMSVoiceV2ClientContextParameters>;

using PinpointSMSVoiceV2DefaultEpProviderBase =
    DefaultEndpointProvider<PinpointSMSVoiceV2ClientConfiguration, PinpointSMSVoiceV2BuiltInParameters, PinpointSMSVoiceV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PINPOINTSMSVOICEV2_API PinpointSMSVoiceV2EndpointProvider : public PinpointSMSVoiceV2DefaultEpProviderBase
{
public:
    using PinpointSMSVoiceV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PinpointSMSVoiceV2EndpointProvider()
      : PinpointSMSVoiceV2DefaultEpProviderBase(Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2EndpointRules::Rules)
    {}

    ~PinpointSMSVoiceV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PinpointSMSVoiceV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PinpointSMSVoiceV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PinpointSMSVoiceV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PinpointSMSVoiceV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PinpointSMSVoiceV2EndpointProvider,
                                                                        PinpointSMSVoiceV2BuiltInParameters,
                                                                        PinpointSMSVoiceV2ClientContextParameters>;


class PinpointSMSVoiceV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using PinpointSMSVoiceV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PinpointSMSVoiceV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    PinpointSMSVoiceV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PinpointSMSVoiceV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PinpointSMSVoiceV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PinpointSMSVoiceV2
} // namespace Aws

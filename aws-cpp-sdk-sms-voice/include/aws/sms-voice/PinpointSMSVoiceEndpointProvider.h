/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PinpointSMSVoiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PinpointSMSVoiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PinpointSMSVoiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PinpointSMSVoiceEndpointProvider,
                                                                        PinpointSMSVoiceBuiltInParameters,
                                                                        PinpointSMSVoiceClientContextParameters>;


class PinpointSMSVoiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PinpointSMSVoiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PinpointSMSVoiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PinpointSMSVoice::PinpointSMSVoiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PinpointSMSVoiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PinpointSMSVoiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PinpointSMSVoiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PinpointSMSVoice
} // namespace Aws

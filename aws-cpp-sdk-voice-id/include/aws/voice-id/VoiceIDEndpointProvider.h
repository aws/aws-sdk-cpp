/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using VoiceIDClientContextParameters = Aws::Endpoint::ClientContextParameters;
using VoiceIDBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class VoiceIDEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<VoiceIDEndpointProvider,
                                                                        VoiceIDBuiltInParameters,
                                                                        VoiceIDClientContextParameters>;


class VoiceIDEndpointProvider : public DefaultEndpointProviderT
{
public:
    using VoiceIDResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    VoiceIDEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::VoiceID::VoiceIDEndpointRules::Rules),
        clientConfiguration(config)
    {}

    VoiceIDResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<VoiceIDEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~VoiceIDEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace VoiceID
} // namespace Aws

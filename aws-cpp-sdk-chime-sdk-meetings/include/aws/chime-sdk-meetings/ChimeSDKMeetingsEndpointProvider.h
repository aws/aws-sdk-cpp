/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointRules.h>


namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ChimeSDKMeetingsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ChimeSDKMeetingsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ChimeSDKMeetingsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ChimeSDKMeetingsEndpointProvider,
                                                                        ChimeSDKMeetingsBuiltInParameters,
                                                                        ChimeSDKMeetingsClientContextParameters>;


class ChimeSDKMeetingsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ChimeSDKMeetingsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ChimeSDKMeetingsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ChimeSDKMeetings::ChimeSDKMeetingsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ChimeSDKMeetingsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ChimeSDKMeetingsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ChimeSDKMeetingsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ChimeSDKMeetings
} // namespace Aws

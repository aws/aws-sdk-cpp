/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ChimeSDKMessagingClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ChimeSDKMessagingBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ChimeSDKMessagingEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ChimeSDKMessagingEndpointProvider,
                                                                        ChimeSDKMessagingBuiltInParameters,
                                                                        ChimeSDKMessagingClientContextParameters>;


class ChimeSDKMessagingEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ChimeSDKMessagingResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ChimeSDKMessagingEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ChimeSDKMessaging::ChimeSDKMessagingEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ChimeSDKMessagingResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ChimeSDKMessagingEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ChimeSDKMessagingEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ChimeSDKMessaging
} // namespace Aws

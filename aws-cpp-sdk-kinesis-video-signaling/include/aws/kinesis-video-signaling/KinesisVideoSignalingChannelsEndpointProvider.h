/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointRules.h>


namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KinesisVideoSignalingChannelsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KinesisVideoSignalingChannelsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KinesisVideoSignalingChannelsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KinesisVideoSignalingChannelsEndpointProvider,
                                                                        KinesisVideoSignalingChannelsBuiltInParameters,
                                                                        KinesisVideoSignalingChannelsClientContextParameters>;


class KinesisVideoSignalingChannelsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KinesisVideoSignalingChannelsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KinesisVideoSignalingChannelsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KinesisVideoSignalingChannelsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KinesisVideoSignalingChannelsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KinesisVideoSignalingChannelsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KinesisVideoSignalingChannels
} // namespace Aws

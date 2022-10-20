/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/medialive/MediaLiveEndpointRules.h>


namespace Aws
{
namespace MediaLive
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MediaLiveClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MediaLiveBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MediaLiveEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MediaLiveEndpointProvider,
                                                                        MediaLiveBuiltInParameters,
                                                                        MediaLiveClientContextParameters>;


class MediaLiveEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MediaLiveResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MediaLiveEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MediaLive::MediaLiveEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MediaLiveResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MediaLiveEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MediaLiveEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MediaLive
} // namespace Aws

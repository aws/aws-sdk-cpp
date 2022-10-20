/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediatailor/MediaTailorEndpointRules.h>


namespace Aws
{
namespace MediaTailor
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MediaTailorClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MediaTailorBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MediaTailorEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MediaTailorEndpointProvider,
                                                                        MediaTailorBuiltInParameters,
                                                                        MediaTailorClientContextParameters>;


class MediaTailorEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MediaTailorResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MediaTailorEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MediaTailor::MediaTailorEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MediaTailorResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MediaTailorEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MediaTailorEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MediaTailor
} // namespace Aws

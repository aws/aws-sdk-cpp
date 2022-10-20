/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediapackage-vod/MediaPackageVodEndpointRules.h>


namespace Aws
{
namespace MediaPackageVod
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MediaPackageVodClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MediaPackageVodBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MediaPackageVodEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MediaPackageVodEndpointProvider,
                                                                        MediaPackageVodBuiltInParameters,
                                                                        MediaPackageVodClientContextParameters>;


class MediaPackageVodEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MediaPackageVodResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MediaPackageVodEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MediaPackageVod::MediaPackageVodEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MediaPackageVodResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MediaPackageVodEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MediaPackageVodEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MediaPackageVod
} // namespace Aws

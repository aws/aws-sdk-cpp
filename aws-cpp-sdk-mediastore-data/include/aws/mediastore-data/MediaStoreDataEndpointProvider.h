/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mediastore-data/MediaStoreDataEndpointRules.h>


namespace Aws
{
namespace MediaStoreData
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MediaStoreDataClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MediaStoreDataBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MediaStoreDataEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MediaStoreDataEndpointProvider,
                                                                        MediaStoreDataBuiltInParameters,
                                                                        MediaStoreDataClientContextParameters>;


class MediaStoreDataEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MediaStoreDataResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MediaStoreDataEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MediaStoreData::MediaStoreDataEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MediaStoreDataResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MediaStoreDataEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MediaStoreDataEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MediaStoreData
} // namespace Aws

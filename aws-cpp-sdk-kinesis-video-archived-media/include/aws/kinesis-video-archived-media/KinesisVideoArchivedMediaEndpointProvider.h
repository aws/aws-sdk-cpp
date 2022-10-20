/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointRules.h>


namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KinesisVideoArchivedMediaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KinesisVideoArchivedMediaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KinesisVideoArchivedMediaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KinesisVideoArchivedMediaEndpointProvider,
                                                                        KinesisVideoArchivedMediaBuiltInParameters,
                                                                        KinesisVideoArchivedMediaClientContextParameters>;


class KinesisVideoArchivedMediaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KinesisVideoArchivedMediaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KinesisVideoArchivedMediaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KinesisVideoArchivedMediaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KinesisVideoArchivedMediaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KinesisVideoArchivedMediaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesis-video-media/KinesisVideoMediaEndpointRules.h>


namespace Aws
{
namespace KinesisVideoMedia
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KinesisVideoMediaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KinesisVideoMediaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KinesisVideoMediaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KinesisVideoMediaEndpointProvider,
                                                                        KinesisVideoMediaBuiltInParameters,
                                                                        KinesisVideoMediaClientContextParameters>;


class KinesisVideoMediaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KinesisVideoMediaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KinesisVideoMediaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KinesisVideoMedia::KinesisVideoMediaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KinesisVideoMediaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KinesisVideoMediaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KinesisVideoMediaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KinesisVideoMedia
} // namespace Aws

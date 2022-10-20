/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kinesisvideo/KinesisVideoEndpointRules.h>


namespace Aws
{
namespace KinesisVideo
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KinesisVideoClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KinesisVideoBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KinesisVideoEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KinesisVideoEndpointProvider,
                                                                        KinesisVideoBuiltInParameters,
                                                                        KinesisVideoClientContextParameters>;


class KinesisVideoEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KinesisVideoResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KinesisVideoEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::KinesisVideo::KinesisVideoEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KinesisVideoResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KinesisVideoEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KinesisVideoEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace KinesisVideo
} // namespace Aws

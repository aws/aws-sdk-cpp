/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointRules.h>


namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ChimeSDKMediaPipelinesClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ChimeSDKMediaPipelinesBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ChimeSDKMediaPipelinesEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ChimeSDKMediaPipelinesEndpointProvider,
                                                                        ChimeSDKMediaPipelinesBuiltInParameters,
                                                                        ChimeSDKMediaPipelinesClientContextParameters>;


class ChimeSDKMediaPipelinesEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ChimeSDKMediaPipelinesResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ChimeSDKMediaPipelinesEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ChimeSDKMediaPipelinesResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ChimeSDKMediaPipelinesEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ChimeSDKMediaPipelinesEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ChimeSDKMediaPipelines
} // namespace Aws

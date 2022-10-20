/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elastictranscoder/ElasticTranscoderEndpointRules.h>


namespace Aws
{
namespace ElasticTranscoder
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElasticTranscoderClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElasticTranscoderBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElasticTranscoderEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElasticTranscoderEndpointProvider,
                                                                        ElasticTranscoderBuiltInParameters,
                                                                        ElasticTranscoderClientContextParameters>;


class ElasticTranscoderEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElasticTranscoderResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElasticTranscoderEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElasticTranscoder::ElasticTranscoderEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElasticTranscoderResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElasticTranscoderEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElasticTranscoderEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElasticTranscoder
} // namespace Aws

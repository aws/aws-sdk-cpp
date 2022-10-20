/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointRules.h>


namespace Aws
{
namespace TranscribeStreamingService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TranscribeStreamingServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TranscribeStreamingServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TranscribeStreamingServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TranscribeStreamingServiceEndpointProvider,
                                                                        TranscribeStreamingServiceBuiltInParameters,
                                                                        TranscribeStreamingServiceClientContextParameters>;


class TranscribeStreamingServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TranscribeStreamingServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TranscribeStreamingServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::TranscribeStreamingService::TranscribeStreamingServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TranscribeStreamingServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TranscribeStreamingServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TranscribeStreamingServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace TranscribeStreamingService
} // namespace Aws

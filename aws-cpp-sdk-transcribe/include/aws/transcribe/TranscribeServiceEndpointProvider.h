/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/transcribe/TranscribeServiceEndpointRules.h>


namespace Aws
{
namespace TranscribeService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using TranscribeServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using TranscribeServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class TranscribeServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<TranscribeServiceEndpointProvider,
                                                                        TranscribeServiceBuiltInParameters,
                                                                        TranscribeServiceClientContextParameters>;


class TranscribeServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using TranscribeServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    TranscribeServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::TranscribeService::TranscribeServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    TranscribeServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<TranscribeServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~TranscribeServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace TranscribeService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lex/LexRuntimeServiceEndpointRules.h>


namespace Aws
{
namespace LexRuntimeService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LexRuntimeServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LexRuntimeServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LexRuntimeServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LexRuntimeServiceEndpointProvider,
                                                                        LexRuntimeServiceBuiltInParameters,
                                                                        LexRuntimeServiceClientContextParameters>;


class LexRuntimeServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LexRuntimeServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LexRuntimeServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LexRuntimeService::LexRuntimeServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LexRuntimeServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LexRuntimeServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LexRuntimeServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LexRuntimeService
} // namespace Aws

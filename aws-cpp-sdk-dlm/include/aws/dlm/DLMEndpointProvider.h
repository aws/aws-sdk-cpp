/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dlm/DLMEndpointRules.h>


namespace Aws
{
namespace DLM
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DLMClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DLMBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DLMEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DLMEndpointProvider,
                                                                        DLMBuiltInParameters,
                                                                        DLMClientContextParameters>;


class DLMEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DLMResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DLMEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DLM::DLMEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DLMResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DLMEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DLMEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DLM
} // namespace Aws

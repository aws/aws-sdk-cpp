/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lexv2-runtime/LexRuntimeV2EndpointRules.h>


namespace Aws
{
namespace LexRuntimeV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LexRuntimeV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LexRuntimeV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LexRuntimeV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LexRuntimeV2EndpointProvider,
                                                                        LexRuntimeV2BuiltInParameters,
                                                                        LexRuntimeV2ClientContextParameters>;


class LexRuntimeV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using LexRuntimeV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LexRuntimeV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LexRuntimeV2::LexRuntimeV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    LexRuntimeV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LexRuntimeV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LexRuntimeV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LexRuntimeV2
} // namespace Aws

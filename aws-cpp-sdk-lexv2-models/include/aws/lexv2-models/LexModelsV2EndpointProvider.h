/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lexv2-models/LexModelsV2EndpointRules.h>


namespace Aws
{
namespace LexModelsV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LexModelsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LexModelsV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LexModelsV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LexModelsV2EndpointProvider,
                                                                        LexModelsV2BuiltInParameters,
                                                                        LexModelsV2ClientContextParameters>;


class LexModelsV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using LexModelsV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LexModelsV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LexModelsV2::LexModelsV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    LexModelsV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LexModelsV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LexModelsV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LexModelsV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lex-models/LexModelBuildingServiceEndpointRules.h>


namespace Aws
{
namespace LexModelBuildingService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LexModelBuildingServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LexModelBuildingServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LexModelBuildingServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LexModelBuildingServiceEndpointProvider,
                                                                        LexModelBuildingServiceBuiltInParameters,
                                                                        LexModelBuildingServiceClientContextParameters>;


class LexModelBuildingServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LexModelBuildingServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LexModelBuildingServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LexModelBuildingService::LexModelBuildingServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LexModelBuildingServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LexModelBuildingServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LexModelBuildingServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LexModelBuildingService
} // namespace Aws

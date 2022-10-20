/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ecs/ECSEndpointRules.h>


namespace Aws
{
namespace ECS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ECSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ECSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ECSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ECSEndpointProvider,
                                                                        ECSBuiltInParameters,
                                                                        ECSClientContextParameters>;


class ECSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ECSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ECSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ECS::ECSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ECSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ECSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ECSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ECS
} // namespace Aws

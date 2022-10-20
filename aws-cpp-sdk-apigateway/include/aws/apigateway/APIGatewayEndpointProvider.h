/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/apigateway/APIGatewayEndpointRules.h>


namespace Aws
{
namespace APIGateway
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using APIGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;
using APIGatewayBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class APIGatewayEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<APIGatewayEndpointProvider,
                                                                        APIGatewayBuiltInParameters,
                                                                        APIGatewayClientContextParameters>;


class APIGatewayEndpointProvider : public DefaultEndpointProviderT
{
public:
    using APIGatewayResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    APIGatewayEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::APIGateway::APIGatewayEndpointRules::Rules),
        clientConfiguration(config)
    {}

    APIGatewayResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<APIGatewayEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~APIGatewayEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace APIGateway
} // namespace Aws

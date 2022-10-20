/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointRules.h>


namespace Aws
{
namespace ApiGatewayManagementApi
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ApiGatewayManagementApiClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ApiGatewayManagementApiBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ApiGatewayManagementApiEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ApiGatewayManagementApiEndpointProvider,
                                                                        ApiGatewayManagementApiBuiltInParameters,
                                                                        ApiGatewayManagementApiClientContextParameters>;


class ApiGatewayManagementApiEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ApiGatewayManagementApiResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ApiGatewayManagementApiEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ApiGatewayManagementApi::ApiGatewayManagementApiEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ApiGatewayManagementApiResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ApiGatewayManagementApiEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ApiGatewayManagementApiEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ApiGatewayManagementApi
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/apigatewayv2/ApiGatewayV2EndpointRules.h>


namespace Aws
{
namespace ApiGatewayV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ApiGatewayV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ApiGatewayV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ApiGatewayV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ApiGatewayV2EndpointProvider,
                                                                        ApiGatewayV2BuiltInParameters,
                                                                        ApiGatewayV2ClientContextParameters>;


class ApiGatewayV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using ApiGatewayV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ApiGatewayV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ApiGatewayV2::ApiGatewayV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    ApiGatewayV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ApiGatewayV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ApiGatewayV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ApiGatewayV2
} // namespace Aws

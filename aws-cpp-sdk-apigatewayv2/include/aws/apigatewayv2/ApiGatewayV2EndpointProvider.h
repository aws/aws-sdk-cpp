/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ApiGatewayV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApiGatewayV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ApiGatewayV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApiGatewayV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApiGatewayV2EndpointProviderBase =
    EndpointProviderBase<ApiGatewayV2ClientConfiguration, ApiGatewayV2BuiltInParameters, ApiGatewayV2ClientContextParameters>;

using ApiGatewayV2DefaultEpProviderBase =
    DefaultEndpointProvider<ApiGatewayV2ClientConfiguration, ApiGatewayV2BuiltInParameters, ApiGatewayV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APIGATEWAYV2_API ApiGatewayV2EndpointProvider : public ApiGatewayV2DefaultEpProviderBase
{
public:
    using ApiGatewayV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ApiGatewayV2EndpointProvider()
      : ApiGatewayV2DefaultEpProviderBase(Aws::ApiGatewayV2::ApiGatewayV2EndpointRules::Rules)
    {}

    ~ApiGatewayV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ApiGatewayV2
} // namespace Aws

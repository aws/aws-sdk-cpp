/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ApiGatewayManagementApiClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApiGatewayManagementApiClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ApiGatewayManagementApiBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApiGatewayManagementApi Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApiGatewayManagementApiEndpointProviderBase =
    EndpointProviderBase<ApiGatewayManagementApiClientConfiguration, ApiGatewayManagementApiBuiltInParameters, ApiGatewayManagementApiClientContextParameters>;

using ApiGatewayManagementApiDefaultEpProviderBase =
    DefaultEndpointProvider<ApiGatewayManagementApiClientConfiguration, ApiGatewayManagementApiBuiltInParameters, ApiGatewayManagementApiClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APIGATEWAYMANAGEMENTAPI_API ApiGatewayManagementApiEndpointProvider : public ApiGatewayManagementApiDefaultEpProviderBase
{
public:
    using ApiGatewayManagementApiResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ApiGatewayManagementApiEndpointProvider()
      : ApiGatewayManagementApiDefaultEpProviderBase(Aws::ApiGatewayManagementApi::ApiGatewayManagementApiEndpointRules::Rules)
    {}

    ~ApiGatewayManagementApiEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ApiGatewayManagementApi
} // namespace Aws

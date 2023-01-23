/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using APIGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;

using APIGatewayClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using APIGatewayBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the APIGateway Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using APIGatewayEndpointProviderBase =
    EndpointProviderBase<APIGatewayClientConfiguration, APIGatewayBuiltInParameters, APIGatewayClientContextParameters>;

using APIGatewayDefaultEpProviderBase =
    DefaultEndpointProvider<APIGatewayClientConfiguration, APIGatewayBuiltInParameters, APIGatewayClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APIGATEWAY_API APIGatewayEndpointProvider : public APIGatewayDefaultEpProviderBase
{
public:
    using APIGatewayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    APIGatewayEndpointProvider()
      : APIGatewayDefaultEpProviderBase(Aws::APIGateway::APIGatewayEndpointRules::GetRulesBlob(), Aws::APIGateway::APIGatewayEndpointRules::RulesBlobSize)
    {}

    ~APIGatewayEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace APIGateway
} // namespace Aws

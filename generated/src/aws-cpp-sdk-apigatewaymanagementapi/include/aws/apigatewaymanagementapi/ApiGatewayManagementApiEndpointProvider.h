/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiClientConfiguration.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ApiGatewayManagementApi {
namespace Endpoint {
using ApiGatewayManagementApiClientConfiguration = Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApiGatewayManagementApiClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APIGATEWAYMANAGEMENTAPI_API ApiGatewayManagementApiBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApiGatewayManagementApiBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApiGatewayManagementApiClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApiGatewayManagementApiClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApiGatewayManagementApiClientConfiguration& config);
};

/**
 * The type for the ApiGatewayManagementApi Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApiGatewayManagementApiEndpointProviderBase =
    EndpointProviderBase<ApiGatewayManagementApiClientConfiguration, ApiGatewayManagementApiBuiltInParameters,
                         ApiGatewayManagementApiClientContextParameters>;

using ApiGatewayManagementApiDefaultEpProviderBase =
    BDDEndpointProvider<ApiGatewayManagementApiClientConfiguration, ApiGatewayManagementApiBuiltInParameters,
                        ApiGatewayManagementApiClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApiGatewayManagementApi

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APIGATEWAYMANAGEMENTAPI_EXTERN template class AWS_APIGATEWAYMANAGEMENTAPI_API
    Aws::Endpoint::EndpointProviderBase<ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientConfiguration,
                                        ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiBuiltInParameters,
                                        ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientContextParameters>;

AWS_APIGATEWAYMANAGEMENTAPI_EXTERN template class AWS_APIGATEWAYMANAGEMENTAPI_API
    Aws::Endpoint::BDDEndpointProvider<ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientConfiguration,
                                       ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiBuiltInParameters,
                                       ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientContextParameters>;
}  // namespace Endpoint

namespace ApiGatewayManagementApi {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APIGATEWAYMANAGEMENTAPI_API ApiGatewayManagementApiEndpointProvider : public ApiGatewayManagementApiDefaultEpProviderBase {
 public:
  using ApiGatewayManagementApiResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApiGatewayManagementApiEndpointProvider();

  ~ApiGatewayManagementApiEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApiGatewayManagementApi
}  // namespace Aws

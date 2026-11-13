/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2ClientConfiguration.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace ApiGatewayV2 {
namespace Endpoint {
using ApiGatewayV2ClientConfiguration = Aws::ApiGatewayV2::ApiGatewayV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ApiGatewayV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APIGATEWAYV2_API ApiGatewayV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ApiGatewayV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ApiGatewayV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ApiGatewayV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ApiGatewayV2ClientConfiguration& config);
};

/**
 * The type for the ApiGatewayV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApiGatewayV2EndpointProviderBase =
    EndpointProviderBase<ApiGatewayV2ClientConfiguration, ApiGatewayV2BuiltInParameters, ApiGatewayV2ClientContextParameters>;

using ApiGatewayV2DefaultEpProviderBase =
    BDDEndpointProvider<ApiGatewayV2ClientConfiguration, ApiGatewayV2BuiltInParameters, ApiGatewayV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace ApiGatewayV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APIGATEWAYV2_EXTERN template class AWS_APIGATEWAYV2_API Aws::Endpoint::EndpointProviderBase<
    ApiGatewayV2::Endpoint::ApiGatewayV2ClientConfiguration, ApiGatewayV2::Endpoint::ApiGatewayV2BuiltInParameters,
    ApiGatewayV2::Endpoint::ApiGatewayV2ClientContextParameters>;

AWS_APIGATEWAYV2_EXTERN template class AWS_APIGATEWAYV2_API Aws::Endpoint::BDDEndpointProvider<
    ApiGatewayV2::Endpoint::ApiGatewayV2ClientConfiguration, ApiGatewayV2::Endpoint::ApiGatewayV2BuiltInParameters,
    ApiGatewayV2::Endpoint::ApiGatewayV2ClientContextParameters>;
}  // namespace Endpoint

namespace ApiGatewayV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APIGATEWAYV2_API ApiGatewayV2EndpointProvider : public ApiGatewayV2DefaultEpProviderBase {
 public:
  using ApiGatewayV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ApiGatewayV2EndpointProvider();

  ~ApiGatewayV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ApiGatewayV2
}  // namespace Aws

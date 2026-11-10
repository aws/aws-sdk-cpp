/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGatewayClientConfiguration.h>
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace APIGateway {
namespace Endpoint {
using APIGatewayClientConfiguration = Aws::APIGateway::APIGatewayClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using APIGatewayClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_APIGATEWAY_API APIGatewayBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~APIGatewayBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const APIGatewayClientConfiguration& config);
  virtual void SetFromClientConfiguration(const APIGatewayClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const APIGatewayClientConfiguration& config);
};

/**
 * The type for the APIGateway Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using APIGatewayEndpointProviderBase =
    EndpointProviderBase<APIGatewayClientConfiguration, APIGatewayBuiltInParameters, APIGatewayClientContextParameters>;

using APIGatewayDefaultEpProviderBase =
    BDDEndpointProvider<APIGatewayClientConfiguration, APIGatewayBuiltInParameters, APIGatewayClientContextParameters>;

}  // namespace Endpoint
}  // namespace APIGateway

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_APIGATEWAY_EXTERN template class AWS_APIGATEWAY_API Aws::Endpoint::EndpointProviderBase<
    APIGateway::Endpoint::APIGatewayClientConfiguration, APIGateway::Endpoint::APIGatewayBuiltInParameters,
    APIGateway::Endpoint::APIGatewayClientContextParameters>;

AWS_APIGATEWAY_EXTERN template class AWS_APIGATEWAY_API Aws::Endpoint::BDDEndpointProvider<
    APIGateway::Endpoint::APIGatewayClientConfiguration, APIGateway::Endpoint::APIGatewayBuiltInParameters,
    APIGateway::Endpoint::APIGatewayClientContextParameters>;
}  // namespace Endpoint

namespace APIGateway {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_APIGATEWAY_API APIGatewayEndpointProvider : public APIGatewayDefaultEpProviderBase {
 public:
  using APIGatewayResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  APIGatewayEndpointProvider();

  ~APIGatewayEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace APIGateway
}  // namespace Aws

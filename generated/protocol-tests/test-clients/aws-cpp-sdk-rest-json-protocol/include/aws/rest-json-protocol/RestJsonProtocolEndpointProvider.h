/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocolClientConfiguration.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Endpoint {
using RestJsonProtocolClientConfiguration = Aws::RestJsonProtocol::RestJsonProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RestJsonProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESTJSONPROTOCOL_API RestJsonProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RestJsonProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RestJsonProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RestJsonProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the RestJsonProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RestJsonProtocolEndpointProviderBase =
    EndpointProviderBase<RestJsonProtocolClientConfiguration, RestJsonProtocolBuiltInParameters, RestJsonProtocolClientContextParameters>;

using RestJsonProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<RestJsonProtocolClientConfiguration, RestJsonProtocolBuiltInParameters,
                            RestJsonProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace RestJsonProtocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESTJSONPROTOCOL_EXTERN template class AWS_RESTJSONPROTOCOL_API Aws::Endpoint::EndpointProviderBase<
    RestJsonProtocol::Endpoint::RestJsonProtocolClientConfiguration, RestJsonProtocol::Endpoint::RestJsonProtocolBuiltInParameters,
    RestJsonProtocol::Endpoint::RestJsonProtocolClientContextParameters>;

AWS_RESTJSONPROTOCOL_EXTERN template class AWS_RESTJSONPROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    RestJsonProtocol::Endpoint::RestJsonProtocolClientConfiguration, RestJsonProtocol::Endpoint::RestJsonProtocolBuiltInParameters,
    RestJsonProtocol::Endpoint::RestJsonProtocolClientContextParameters>;
}  // namespace Endpoint

namespace RestJsonProtocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESTJSONPROTOCOL_API RestJsonProtocolEndpointProvider : public RestJsonProtocolDefaultEpProviderBase {
 public:
  using RestJsonProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RestJsonProtocolEndpointProvider();

  ~RestJsonProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RestJsonProtocol
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/json-protocol/JsonProtocolClientConfiguration.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace JsonProtocol {
namespace Endpoint {
using JsonProtocolClientConfiguration = Aws::JsonProtocol::JsonProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using JsonProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_JSONPROTOCOL_API JsonProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~JsonProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const JsonProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const JsonProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the JsonProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using JsonProtocolEndpointProviderBase =
    EndpointProviderBase<JsonProtocolClientConfiguration, JsonProtocolBuiltInParameters, JsonProtocolClientContextParameters>;

using JsonProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<JsonProtocolClientConfiguration, JsonProtocolBuiltInParameters, JsonProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace JsonProtocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_JSONPROTOCOL_EXTERN template class AWS_JSONPROTOCOL_API Aws::Endpoint::EndpointProviderBase<
    JsonProtocol::Endpoint::JsonProtocolClientConfiguration, JsonProtocol::Endpoint::JsonProtocolBuiltInParameters,
    JsonProtocol::Endpoint::JsonProtocolClientContextParameters>;

AWS_JSONPROTOCOL_EXTERN template class AWS_JSONPROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    JsonProtocol::Endpoint::JsonProtocolClientConfiguration, JsonProtocol::Endpoint::JsonProtocolBuiltInParameters,
    JsonProtocol::Endpoint::JsonProtocolClientContextParameters>;
}  // namespace Endpoint

namespace JsonProtocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_JSONPROTOCOL_API JsonProtocolEndpointProvider : public JsonProtocolDefaultEpProviderBase {
 public:
  using JsonProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  JsonProtocolEndpointProvider();

  ~JsonProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace JsonProtocol
}  // namespace Aws

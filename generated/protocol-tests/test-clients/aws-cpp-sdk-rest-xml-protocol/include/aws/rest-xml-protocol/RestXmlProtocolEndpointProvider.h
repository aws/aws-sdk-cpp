/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClientConfiguration.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

namespace Aws {
namespace RestXmlProtocol {
namespace Endpoint {
using RestXmlProtocolClientConfiguration = Aws::RestXmlProtocol::RestXmlProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RestXmlProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RESTXMLPROTOCOL_API RestXmlProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RestXmlProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RestXmlProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RestXmlProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the RestXmlProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RestXmlProtocolEndpointProviderBase =
    EndpointProviderBase<RestXmlProtocolClientConfiguration, RestXmlProtocolBuiltInParameters, RestXmlProtocolClientContextParameters>;

using RestXmlProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<RestXmlProtocolClientConfiguration, RestXmlProtocolBuiltInParameters, RestXmlProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace RestXmlProtocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RESTXMLPROTOCOL_EXTERN template class AWS_RESTXMLPROTOCOL_API Aws::Endpoint::EndpointProviderBase<
    RestXmlProtocol::Endpoint::RestXmlProtocolClientConfiguration, RestXmlProtocol::Endpoint::RestXmlProtocolBuiltInParameters,
    RestXmlProtocol::Endpoint::RestXmlProtocolClientContextParameters>;

AWS_RESTXMLPROTOCOL_EXTERN template class AWS_RESTXMLPROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    RestXmlProtocol::Endpoint::RestXmlProtocolClientConfiguration, RestXmlProtocol::Endpoint::RestXmlProtocolBuiltInParameters,
    RestXmlProtocol::Endpoint::RestXmlProtocolClientContextParameters>;
}  // namespace Endpoint

namespace RestXmlProtocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RESTXMLPROTOCOL_API RestXmlProtocolEndpointProvider : public RestXmlProtocolDefaultEpProviderBase {
 public:
  using RestXmlProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RestXmlProtocolEndpointProvider();

  ~RestXmlProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RestXmlProtocol
}  // namespace Aws

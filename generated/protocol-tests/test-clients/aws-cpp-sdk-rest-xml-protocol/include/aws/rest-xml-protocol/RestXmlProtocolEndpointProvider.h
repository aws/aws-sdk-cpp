/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-xml-protocol/RestXmlProtocolEndpointRules.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

namespace Aws {
namespace RestXmlProtocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RestXmlProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RestXmlProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using RestXmlProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RestXmlProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RestXmlProtocolEndpointProviderBase =
    EndpointProviderBase<RestXmlProtocolClientConfiguration, RestXmlProtocolBuiltInParameters, RestXmlProtocolClientContextParameters>;

using RestXmlProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<RestXmlProtocolClientConfiguration, RestXmlProtocolBuiltInParameters, RestXmlProtocolClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESTXMLPROTOCOL_API RestXmlProtocolEndpointProvider : public RestXmlProtocolDefaultEpProviderBase {
 public:
  using RestXmlProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RestXmlProtocolEndpointProvider()
      : RestXmlProtocolDefaultEpProviderBase(Aws::RestXmlProtocol::RestXmlProtocolEndpointRules::GetRulesBlob(),
                                             Aws::RestXmlProtocol::RestXmlProtocolEndpointRules::RulesBlobSize) {}

  ~RestXmlProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RestXmlProtocol
}  // namespace Aws

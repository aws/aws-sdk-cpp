/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/RestXmlProtocolEndpointProvider.h>
#include <aws/rest-xml-protocol/internal/RestXmlProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_RESTXMLPROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RestXmlProtocol::Endpoint::RestXmlProtocolClientConfiguration,
                                                   RestXmlProtocol::Endpoint::RestXmlProtocolBuiltInParameters,
                                                   RestXmlProtocol::Endpoint::RestXmlProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<RestXmlProtocol::Endpoint::RestXmlProtocolClientConfiguration,
                                                      RestXmlProtocol::Endpoint::RestXmlProtocolBuiltInParameters,
                                                      RestXmlProtocol::Endpoint::RestXmlProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RestXmlProtocol {
namespace Endpoint {
RestXmlProtocolEndpointProvider::RestXmlProtocolEndpointProvider()
    : RestXmlProtocolDefaultEpProviderBase(Aws::RestXmlProtocol::RestXmlProtocolEndpointRules::GetRulesBlob(),
                                           Aws::RestXmlProtocol::RestXmlProtocolEndpointRules::RulesBlobSize) {}

void RestXmlProtocolBuiltInParameters::SetFromClientConfiguration(const RestXmlProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RestXmlProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void RestXmlProtocolBuiltInParameters::SetFromClientConfiguration(const RestXmlProtocolClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RestXmlProtocolClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace RestXmlProtocol
}  // namespace Aws

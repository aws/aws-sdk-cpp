/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/RestJsonProtocolEndpointProvider.h>
#include <aws/rest-json-protocol/internal/RestJsonProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_RESTJSONPROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RestJsonProtocol::Endpoint::RestJsonProtocolClientConfiguration,
                                                   RestJsonProtocol::Endpoint::RestJsonProtocolBuiltInParameters,
                                                   RestJsonProtocol::Endpoint::RestJsonProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<RestJsonProtocol::Endpoint::RestJsonProtocolClientConfiguration,
                                                      RestJsonProtocol::Endpoint::RestJsonProtocolBuiltInParameters,
                                                      RestJsonProtocol::Endpoint::RestJsonProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RestJsonProtocol {
namespace Endpoint {
RestJsonProtocolEndpointProvider::RestJsonProtocolEndpointProvider()
    : RestJsonProtocolDefaultEpProviderBase(Aws::RestJsonProtocol::RestJsonProtocolEndpointRules::GetRulesBlob(),
                                            Aws::RestJsonProtocol::RestJsonProtocolEndpointRules::RulesBlobSize) {}

void RestJsonProtocolBuiltInParameters::SetFromClientConfiguration(const RestJsonProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RestJsonProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void RestJsonProtocolBuiltInParameters::SetFromClientConfiguration(const RestJsonProtocolClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RestJsonProtocolClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace RestJsonProtocol
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/JsonProtocolEndpointProvider.h>
#include <aws/json-protocol/internal/JsonProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_JSONPROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<JsonProtocol::Endpoint::JsonProtocolClientConfiguration,
                                                   JsonProtocol::Endpoint::JsonProtocolBuiltInParameters,
                                                   JsonProtocol::Endpoint::JsonProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<JsonProtocol::Endpoint::JsonProtocolClientConfiguration,
                                                      JsonProtocol::Endpoint::JsonProtocolBuiltInParameters,
                                                      JsonProtocol::Endpoint::JsonProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace JsonProtocol {
namespace Endpoint {
JsonProtocolEndpointProvider::JsonProtocolEndpointProvider()
    : JsonProtocolDefaultEpProviderBase(Aws::JsonProtocol::JsonProtocolEndpointRules::GetRulesBlob(),
                                        Aws::JsonProtocol::JsonProtocolEndpointRules::RulesBlobSize) {}

void JsonProtocolBuiltInParameters::SetFromClientConfiguration(const JsonProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const JsonProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void JsonProtocolBuiltInParameters::SetFromClientConfiguration(const JsonProtocolClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const JsonProtocolClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace JsonProtocol
}  // namespace Aws

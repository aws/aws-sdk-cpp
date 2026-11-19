/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-rpc-10/JSONRPC10EndpointProvider.h>
#include <aws/json-rpc-10/internal/JSONRPC10EndpointRules.h>

namespace Aws {
#ifndef AWS_JSONRPC10_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<JSONRPC10::Endpoint::JSONRPC10ClientConfiguration,
                                                   JSONRPC10::Endpoint::JSONRPC10BuiltInParameters,
                                                   JSONRPC10::Endpoint::JSONRPC10ClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<JSONRPC10::Endpoint::JSONRPC10ClientConfiguration,
                                                      JSONRPC10::Endpoint::JSONRPC10BuiltInParameters,
                                                      JSONRPC10::Endpoint::JSONRPC10ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace JSONRPC10 {
namespace Endpoint {
JSONRPC10EndpointProvider::JSONRPC10EndpointProvider()
    : JSONRPC10DefaultEpProviderBase(Aws::JSONRPC10::JSONRPC10EndpointRules::GetRulesBlob(),
                                     Aws::JSONRPC10::JSONRPC10EndpointRules::RulesBlobSize) {}

void JSONRPC10BuiltInParameters::SetFromClientConfiguration(const JSONRPC10ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const JSONRPC10ClientConfiguration::BaseClientConfigClass&>(config));
}

void JSONRPC10BuiltInParameters::SetFromClientConfiguration(const JSONRPC10ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const JSONRPC10ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace JSONRPC10
}  // namespace Aws

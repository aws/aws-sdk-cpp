/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/non-query-compatible-rpcv2-protocol/internal/NonQueryCompatibleRpcV2ProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientConfiguration,
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolBuiltInParameters,
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientConfiguration,
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolBuiltInParameters,
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace NonQueryCompatibleRpcV2Protocol {
namespace Endpoint {
NonQueryCompatibleRpcV2ProtocolEndpointProvider::NonQueryCompatibleRpcV2ProtocolEndpointProvider()
    : NonQueryCompatibleRpcV2ProtocolDefaultEpProviderBase(
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolEndpointRules::GetRulesBlob(),
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolEndpointRules::RulesBlobSize) {}

void NonQueryCompatibleRpcV2ProtocolBuiltInParameters::SetFromClientConfiguration(
    const NonQueryCompatibleRpcV2ProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const NonQueryCompatibleRpcV2ProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void NonQueryCompatibleRpcV2ProtocolBuiltInParameters::SetFromClientConfiguration(
    const NonQueryCompatibleRpcV2ProtocolClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const NonQueryCompatibleRpcV2ProtocolClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
}

}  // namespace Endpoint
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws

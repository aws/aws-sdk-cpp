/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/RpcV2ProtocolEndpointProvider.h>
#include <aws/rpcv2protocol/internal/RpcV2ProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_RPCV2PROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<RpcV2Protocol::Endpoint::RpcV2ProtocolClientConfiguration,
                                                   RpcV2Protocol::Endpoint::RpcV2ProtocolBuiltInParameters,
                                                   RpcV2Protocol::Endpoint::RpcV2ProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<RpcV2Protocol::Endpoint::RpcV2ProtocolClientConfiguration,
                                                      RpcV2Protocol::Endpoint::RpcV2ProtocolBuiltInParameters,
                                                      RpcV2Protocol::Endpoint::RpcV2ProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace RpcV2Protocol {
namespace Endpoint {
RpcV2ProtocolEndpointProvider::RpcV2ProtocolEndpointProvider()
    : RpcV2ProtocolDefaultEpProviderBase(Aws::RpcV2Protocol::RpcV2ProtocolEndpointRules::GetRulesBlob(),
                                         Aws::RpcV2Protocol::RpcV2ProtocolEndpointRules::RulesBlobSize) {}

void RpcV2ProtocolBuiltInParameters::SetFromClientConfiguration(const RpcV2ProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const RpcV2ProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void RpcV2ProtocolBuiltInParameters::SetFromClientConfiguration(const RpcV2ProtocolClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const RpcV2ProtocolClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace RpcV2Protocol
}  // namespace Aws

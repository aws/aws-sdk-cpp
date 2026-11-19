/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/query-compatible-rpcv2-protocol/internal/QueryCompatibleRpcV2ProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_QUERYCOMPATIBLERPCV2PROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientConfiguration,
    QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolBuiltInParameters,
    QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<
    QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientConfiguration,
    QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolBuiltInParameters,
    QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QueryCompatibleRpcV2Protocol {
namespace Endpoint {
QueryCompatibleRpcV2ProtocolEndpointProvider::QueryCompatibleRpcV2ProtocolEndpointProvider()
    : QueryCompatibleRpcV2ProtocolDefaultEpProviderBase(
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolEndpointRules::GetRulesBlob(),
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolEndpointRules::RulesBlobSize) {}

void QueryCompatibleRpcV2ProtocolBuiltInParameters::SetFromClientConfiguration(
    const QueryCompatibleRpcV2ProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QueryCompatibleRpcV2ProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void QueryCompatibleRpcV2ProtocolBuiltInParameters::SetFromClientConfiguration(
    const QueryCompatibleRpcV2ProtocolClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QueryCompatibleRpcV2ProtocolClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
}

}  // namespace Endpoint
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws

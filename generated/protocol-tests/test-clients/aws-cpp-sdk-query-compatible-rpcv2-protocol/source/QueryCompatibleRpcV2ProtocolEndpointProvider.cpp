/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/query-compatible-rpcv2-protocol/internal/QueryCompatibleRpcV2ProtocolEndpointRules.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
namespace Endpoint {
QueryCompatibleRpcV2ProtocolEndpointProvider::QueryCompatibleRpcV2ProtocolEndpointProvider()
    : QueryCompatibleRpcV2ProtocolDefaultEpProviderBase(
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolEndpointRules::GetRulesBlob(),
          Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws

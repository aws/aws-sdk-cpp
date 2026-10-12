/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolEndpointProvider.h>
#include <aws/non-query-compatible-rpcv2-protocol/internal/NonQueryCompatibleRpcV2ProtocolEndpointRules.h>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
namespace Endpoint {
NonQueryCompatibleRpcV2ProtocolEndpointProvider::NonQueryCompatibleRpcV2ProtocolEndpointProvider()
    : NonQueryCompatibleRpcV2ProtocolDefaultEpProviderBase(
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolEndpointRules::GetRulesBlob(),
          Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws

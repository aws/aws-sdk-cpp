/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2protocol/RpcV2ProtocolEndpointProvider.h>
#include <aws/rpcv2protocol/internal/RpcV2ProtocolEndpointRules.h>

namespace Aws {
namespace RpcV2Protocol {
namespace Endpoint {
RpcV2ProtocolEndpointProvider::RpcV2ProtocolEndpointProvider()
    : RpcV2ProtocolDefaultEpProviderBase(Aws::RpcV2Protocol::RpcV2ProtocolEndpointRules::GetRulesBlob(),
                                         Aws::RpcV2Protocol::RpcV2ProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RpcV2Protocol
}  // namespace Aws

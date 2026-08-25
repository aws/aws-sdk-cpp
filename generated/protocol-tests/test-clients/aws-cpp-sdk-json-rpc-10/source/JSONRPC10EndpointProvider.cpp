/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-rpc-10/JSONRPC10EndpointProvider.h>
#include <aws/json-rpc-10/internal/JSONRPC10EndpointRules.h>

namespace Aws {
namespace JSONRPC10 {
namespace Endpoint {
JSONRPC10EndpointProvider::JSONRPC10EndpointProvider()
    : JSONRPC10DefaultEpProviderBase(Aws::JSONRPC10::JSONRPC10EndpointRules::GetRulesBlob(),
                                     Aws::JSONRPC10::JSONRPC10EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace JSONRPC10
}  // namespace Aws

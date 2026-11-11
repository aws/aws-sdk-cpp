/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsEndpointProvider.h>
#include <aws/rpcv2cborcorpustests/internal/RpcV2CborCorpusTestsEndpointRules.h>

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Endpoint {
RpcV2CborCorpusTestsEndpointProvider::RpcV2CborCorpusTestsEndpointProvider()
    : RpcV2CborCorpusTestsDefaultEpProviderBase(Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsEndpointRules::GetRulesBlob(),
                                                Aws::RpcV2CborCorpusTests::RpcV2CborCorpusTestsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws

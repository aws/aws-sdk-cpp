/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/LexRuntimeServiceEndpointProvider.h>
#include <aws/lex/internal/LexRuntimeServiceEndpointRules.h>

namespace Aws {
namespace LexRuntimeService {
namespace Endpoint {
LexRuntimeServiceEndpointProvider::LexRuntimeServiceEndpointProvider()
    : LexRuntimeServiceDefaultEpProviderBase(Aws::LexRuntimeService::LexRuntimeServiceEndpointRules::GetRulesBlob(),
                                             Aws::LexRuntimeService::LexRuntimeServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LexRuntimeService
}  // namespace Aws

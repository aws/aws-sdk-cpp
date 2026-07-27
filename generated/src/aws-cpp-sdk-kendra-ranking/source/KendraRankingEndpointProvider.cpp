/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/KendraRankingEndpointProvider.h>
#include <aws/kendra-ranking/internal/KendraRankingEndpointRules.h>

namespace Aws {
namespace KendraRanking {
namespace Endpoint {
KendraRankingEndpointProvider::KendraRankingEndpointProvider()
    : KendraRankingDefaultEpProviderBase(Aws::KendraRanking::KendraRankingEndpointRules::GetRulesBlob(),
                                         Aws::KendraRanking::KendraRankingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KendraRanking
}  // namespace Aws

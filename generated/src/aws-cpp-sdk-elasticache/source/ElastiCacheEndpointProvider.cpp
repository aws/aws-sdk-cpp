/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/ElastiCacheEndpointProvider.h>
#include <aws/elasticache/internal/ElastiCacheEndpointRules.h>

namespace Aws {
namespace ElastiCache {
namespace Endpoint {
ElastiCacheEndpointProvider::ElastiCacheEndpointProvider()
    : ElastiCacheDefaultEpProviderBase(Aws::ElastiCache::ElastiCacheEndpointRules::GetRulesBlob(),
                                       Aws::ElastiCache::ElastiCacheEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ElastiCache
}  // namespace Aws

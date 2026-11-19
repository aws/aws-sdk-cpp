/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/ElastiCacheEndpointProvider.h>
#include <aws/elasticache/internal/ElastiCacheEndpointRules.h>

namespace Aws {
#ifndef AWS_ELASTICACHE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ElastiCache::Endpoint::ElastiCacheClientConfiguration,
                                                   ElastiCache::Endpoint::ElastiCacheBuiltInParameters,
                                                   ElastiCache::Endpoint::ElastiCacheClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ElastiCache::Endpoint::ElastiCacheClientConfiguration,
                                                  ElastiCache::Endpoint::ElastiCacheBuiltInParameters,
                                                  ElastiCache::Endpoint::ElastiCacheClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ElastiCache {
namespace Endpoint {
ElastiCacheEndpointProvider::ElastiCacheEndpointProvider()
    : ElastiCacheDefaultEpProviderBase(Aws::ElastiCache::ElastiCacheEndpointRules::GetRulesBlob(),
                                       Aws::ElastiCache::ElastiCacheEndpointRules::RulesBlobSize) {}

void ElastiCacheBuiltInParameters::SetFromClientConfiguration(const ElastiCacheClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ElastiCacheClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ElastiCacheBuiltInParameters::SetFromClientConfiguration(const ElastiCacheClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ElastiCacheClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ElastiCacheBuiltInParameters::SetServiceSpecificParameters(const ElastiCacheClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ElastiCache
}  // namespace Aws

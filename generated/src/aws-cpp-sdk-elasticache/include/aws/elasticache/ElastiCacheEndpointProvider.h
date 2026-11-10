/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/ElastiCacheClientConfiguration.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>

namespace Aws {
namespace ElastiCache {
namespace Endpoint {
using ElastiCacheClientConfiguration = Aws::ElastiCache::ElastiCacheClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ElastiCacheClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_ELASTICACHE_API ElastiCacheBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ElastiCacheBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ElastiCacheClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ElastiCacheClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ElastiCacheClientConfiguration& config);
};

/**
 * The type for the ElastiCache Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElastiCacheEndpointProviderBase =
    EndpointProviderBase<ElastiCacheClientConfiguration, ElastiCacheBuiltInParameters, ElastiCacheClientContextParameters>;

using ElastiCacheDefaultEpProviderBase =
    BDDEndpointProvider<ElastiCacheClientConfiguration, ElastiCacheBuiltInParameters, ElastiCacheClientContextParameters>;

}  // namespace Endpoint
}  // namespace ElastiCache

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_ELASTICACHE_EXTERN template class AWS_ELASTICACHE_API Aws::Endpoint::EndpointProviderBase<
    ElastiCache::Endpoint::ElastiCacheClientConfiguration, ElastiCache::Endpoint::ElastiCacheBuiltInParameters,
    ElastiCache::Endpoint::ElastiCacheClientContextParameters>;

AWS_ELASTICACHE_EXTERN template class AWS_ELASTICACHE_API Aws::Endpoint::BDDEndpointProvider<
    ElastiCache::Endpoint::ElastiCacheClientConfiguration, ElastiCache::Endpoint::ElastiCacheBuiltInParameters,
    ElastiCache::Endpoint::ElastiCacheClientContextParameters>;
}  // namespace Endpoint

namespace ElastiCache {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICACHE_API ElastiCacheEndpointProvider : public ElastiCacheDefaultEpProviderBase {
 public:
  using ElastiCacheResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ElastiCacheEndpointProvider();

  ~ElastiCacheEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ElastiCache
}  // namespace Aws

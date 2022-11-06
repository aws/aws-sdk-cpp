/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticache/ElastiCacheEndpointRules.h>


namespace Aws
{
namespace ElastiCache
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ElastiCacheClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ElastiCacheClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ElastiCacheBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ElastiCache Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ElastiCacheEndpointProviderBase =
    EndpointProviderBase<ElastiCacheClientConfiguration, ElastiCacheBuiltInParameters, ElastiCacheClientContextParameters>;

using ElastiCacheDefaultEpProviderBase =
    DefaultEndpointProvider<ElastiCacheClientConfiguration, ElastiCacheBuiltInParameters, ElastiCacheClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ELASTICACHE_API ElastiCacheEndpointProvider : public ElastiCacheDefaultEpProviderBase
{
public:
    using ElastiCacheResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ElastiCacheEndpointProvider()
      : ElastiCacheDefaultEpProviderBase(Aws::ElastiCache::ElastiCacheEndpointRules::Rules)
    {}

    ~ElastiCacheEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ElastiCache
} // namespace Aws

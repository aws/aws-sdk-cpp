/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ElastiCacheClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ElastiCacheBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ElastiCacheEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ElastiCacheEndpointProvider,
                                                                        ElastiCacheBuiltInParameters,
                                                                        ElastiCacheClientContextParameters>;


class ElastiCacheEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ElastiCacheResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ElastiCacheEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ElastiCache::ElastiCacheEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ElastiCacheResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ElastiCacheEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ElastiCacheEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ElastiCache
} // namespace Aws

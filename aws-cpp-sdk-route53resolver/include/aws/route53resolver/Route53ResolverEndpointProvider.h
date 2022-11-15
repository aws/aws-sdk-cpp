/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53resolver/Route53ResolverEndpointRules.h>


namespace Aws
{
namespace Route53Resolver
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53ResolverClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53ResolverClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Route53ResolverBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53Resolver Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53ResolverEndpointProviderBase =
    EndpointProviderBase<Route53ResolverClientConfiguration, Route53ResolverBuiltInParameters, Route53ResolverClientContextParameters>;

using Route53ResolverDefaultEpProviderBase =
    DefaultEndpointProvider<Route53ResolverClientConfiguration, Route53ResolverBuiltInParameters, Route53ResolverClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RESOLVER_API Route53ResolverEndpointProvider : public Route53ResolverDefaultEpProviderBase
{
public:
    using Route53ResolverResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53ResolverEndpointProvider()
      : Route53ResolverDefaultEpProviderBase(Aws::Route53Resolver::Route53ResolverEndpointRules::Rules)
    {}

    ~Route53ResolverEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53Resolver
} // namespace Aws

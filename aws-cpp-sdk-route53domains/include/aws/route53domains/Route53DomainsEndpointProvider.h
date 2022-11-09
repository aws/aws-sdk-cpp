/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53domains/Route53DomainsEndpointRules.h>


namespace Aws
{
namespace Route53Domains
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53DomainsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53DomainsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Route53DomainsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53Domains Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53DomainsEndpointProviderBase =
    EndpointProviderBase<Route53DomainsClientConfiguration, Route53DomainsBuiltInParameters, Route53DomainsClientContextParameters>;

using Route53DomainsDefaultEpProviderBase =
    DefaultEndpointProvider<Route53DomainsClientConfiguration, Route53DomainsBuiltInParameters, Route53DomainsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53DOMAINS_API Route53DomainsEndpointProvider : public Route53DomainsDefaultEpProviderBase
{
public:
    using Route53DomainsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53DomainsEndpointProvider()
      : Route53DomainsDefaultEpProviderBase(Aws::Route53Domains::Route53DomainsEndpointRules::Rules)
    {}

    ~Route53DomainsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53Domains
} // namespace Aws

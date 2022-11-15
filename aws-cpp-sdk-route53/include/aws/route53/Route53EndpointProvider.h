/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53/Route53EndpointRules.h>


namespace Aws
{
namespace Route53
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Route53BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53EndpointProviderBase =
    EndpointProviderBase<Route53ClientConfiguration, Route53BuiltInParameters, Route53ClientContextParameters>;

using Route53DefaultEpProviderBase =
    DefaultEndpointProvider<Route53ClientConfiguration, Route53BuiltInParameters, Route53ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53_API Route53EndpointProvider : public Route53DefaultEpProviderBase
{
public:
    using Route53ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53EndpointProvider()
      : Route53DefaultEpProviderBase(Aws::Route53::Route53EndpointRules::Rules)
    {}

    ~Route53EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53
} // namespace Aws

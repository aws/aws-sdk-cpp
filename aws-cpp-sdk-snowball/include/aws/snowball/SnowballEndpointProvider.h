/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/snowball/SnowballEndpointRules.h>


namespace Aws
{
namespace Snowball
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SnowballClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SnowballClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SnowballBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Snowball Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SnowballEndpointProviderBase =
    EndpointProviderBase<SnowballClientConfiguration, SnowballBuiltInParameters, SnowballClientContextParameters>;

using SnowballDefaultEpProviderBase =
    DefaultEndpointProvider<SnowballClientConfiguration, SnowballBuiltInParameters, SnowballClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SNOWBALL_API SnowballEndpointProvider : public SnowballDefaultEpProviderBase
{
public:
    using SnowballResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SnowballEndpointProvider()
      : SnowballDefaultEpProviderBase(Aws::Snowball::SnowballEndpointRules::Rules)
    {}

    ~SnowballEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Snowball
} // namespace Aws

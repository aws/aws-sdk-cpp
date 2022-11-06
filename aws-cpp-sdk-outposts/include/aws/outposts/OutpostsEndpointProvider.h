/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/outposts/OutpostsEndpointRules.h>


namespace Aws
{
namespace Outposts
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using OutpostsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using OutpostsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using OutpostsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Outposts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OutpostsEndpointProviderBase =
    EndpointProviderBase<OutpostsClientConfiguration, OutpostsBuiltInParameters, OutpostsClientContextParameters>;

using OutpostsDefaultEpProviderBase =
    DefaultEndpointProvider<OutpostsClientConfiguration, OutpostsBuiltInParameters, OutpostsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_OUTPOSTS_API OutpostsEndpointProvider : public OutpostsDefaultEpProviderBase
{
public:
    using OutpostsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    OutpostsEndpointProvider()
      : OutpostsDefaultEpProviderBase(Aws::Outposts::OutpostsEndpointRules::Rules)
    {}

    ~OutpostsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Outposts
} // namespace Aws

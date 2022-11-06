/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/glacier/GlacierEndpointRules.h>


namespace Aws
{
namespace Glacier
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GlacierClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GlacierClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GlacierBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Glacier Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlacierEndpointProviderBase =
    EndpointProviderBase<GlacierClientConfiguration, GlacierBuiltInParameters, GlacierClientContextParameters>;

using GlacierDefaultEpProviderBase =
    DefaultEndpointProvider<GlacierClientConfiguration, GlacierBuiltInParameters, GlacierClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GLACIER_API GlacierEndpointProvider : public GlacierDefaultEpProviderBase
{
public:
    using GlacierResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GlacierEndpointProvider()
      : GlacierDefaultEpProviderBase(Aws::Glacier::GlacierEndpointRules::Rules)
    {}

    ~GlacierEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Glacier
} // namespace Aws

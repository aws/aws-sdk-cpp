/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/glue/GlueEndpointRules.h>


namespace Aws
{
namespace Glue
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GlueClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GlueClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GlueBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Glue Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlueEndpointProviderBase =
    EndpointProviderBase<GlueClientConfiguration, GlueBuiltInParameters, GlueClientContextParameters>;

using GlueDefaultEpProviderBase =
    DefaultEndpointProvider<GlueClientConfiguration, GlueBuiltInParameters, GlueClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GLUE_API GlueEndpointProvider : public GlueDefaultEpProviderBase
{
public:
    using GlueResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GlueEndpointProvider()
      : GlueDefaultEpProviderBase(Aws::Glue::GlueEndpointRules::Rules)
    {}

    ~GlueEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Glue
} // namespace Aws

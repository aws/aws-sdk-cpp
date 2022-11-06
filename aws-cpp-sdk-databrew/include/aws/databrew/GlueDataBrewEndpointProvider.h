/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/databrew/GlueDataBrewEndpointRules.h>


namespace Aws
{
namespace GlueDataBrew
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GlueDataBrewClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GlueDataBrewClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GlueDataBrewBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GlueDataBrew Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlueDataBrewEndpointProviderBase =
    EndpointProviderBase<GlueDataBrewClientConfiguration, GlueDataBrewBuiltInParameters, GlueDataBrewClientContextParameters>;

using GlueDataBrewDefaultEpProviderBase =
    DefaultEndpointProvider<GlueDataBrewClientConfiguration, GlueDataBrewBuiltInParameters, GlueDataBrewClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GLUEDATABREW_API GlueDataBrewEndpointProvider : public GlueDataBrewDefaultEpProviderBase
{
public:
    using GlueDataBrewResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GlueDataBrewEndpointProvider()
      : GlueDataBrewDefaultEpProviderBase(Aws::GlueDataBrew::GlueDataBrewEndpointRules::Rules)
    {}

    ~GlueDataBrewEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GlueDataBrew
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pipes/PipesEndpointRules.h>


namespace Aws
{
namespace Pipes
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PipesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PipesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PipesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Pipes Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PipesEndpointProviderBase =
    EndpointProviderBase<PipesClientConfiguration, PipesBuiltInParameters, PipesClientContextParameters>;

using PipesDefaultEpProviderBase =
    DefaultEndpointProvider<PipesClientConfiguration, PipesBuiltInParameters, PipesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PIPES_API PipesEndpointProvider : public PipesDefaultEpProviderBase
{
public:
    using PipesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PipesEndpointProvider()
      : PipesDefaultEpProviderBase(Aws::Pipes::PipesEndpointRules::Rules)
    {}

    ~PipesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Pipes
} // namespace Aws

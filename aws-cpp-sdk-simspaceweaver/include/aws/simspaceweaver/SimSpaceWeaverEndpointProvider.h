/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/simspaceweaver/SimSpaceWeaverEndpointRules.h>


namespace Aws
{
namespace SimSpaceWeaver
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SimSpaceWeaverClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SimSpaceWeaverClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SimSpaceWeaverBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SimSpaceWeaver Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SimSpaceWeaverEndpointProviderBase =
    EndpointProviderBase<SimSpaceWeaverClientConfiguration, SimSpaceWeaverBuiltInParameters, SimSpaceWeaverClientContextParameters>;

using SimSpaceWeaverDefaultEpProviderBase =
    DefaultEndpointProvider<SimSpaceWeaverClientConfiguration, SimSpaceWeaverBuiltInParameters, SimSpaceWeaverClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SIMSPACEWEAVER_API SimSpaceWeaverEndpointProvider : public SimSpaceWeaverDefaultEpProviderBase
{
public:
    using SimSpaceWeaverResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SimSpaceWeaverEndpointProvider()
      : SimSpaceWeaverDefaultEpProviderBase(Aws::SimSpaceWeaver::SimSpaceWeaverEndpointRules::Rules)
    {}

    ~SimSpaceWeaverEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SimSpaceWeaver
} // namespace Aws

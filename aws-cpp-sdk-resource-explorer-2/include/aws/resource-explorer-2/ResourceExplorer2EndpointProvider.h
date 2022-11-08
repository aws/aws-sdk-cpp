/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/resource-explorer-2/ResourceExplorer2EndpointRules.h>


namespace Aws
{
namespace ResourceExplorer2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ResourceExplorer2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ResourceExplorer2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ResourceExplorer2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ResourceExplorer2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResourceExplorer2EndpointProviderBase =
    EndpointProviderBase<ResourceExplorer2ClientConfiguration, ResourceExplorer2BuiltInParameters, ResourceExplorer2ClientContextParameters>;

using ResourceExplorer2DefaultEpProviderBase =
    DefaultEndpointProvider<ResourceExplorer2ClientConfiguration, ResourceExplorer2BuiltInParameters, ResourceExplorer2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESOURCEEXPLORER2_API ResourceExplorer2EndpointProvider : public ResourceExplorer2DefaultEpProviderBase
{
public:
    using ResourceExplorer2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ResourceExplorer2EndpointProvider()
      : ResourceExplorer2DefaultEpProviderBase(Aws::ResourceExplorer2::ResourceExplorer2EndpointRules::Rules)
    {}

    ~ResourceExplorer2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ResourceExplorer2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/resource-groups/ResourceGroupsEndpointRules.h>


namespace Aws
{
namespace ResourceGroups
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ResourceGroupsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ResourceGroupsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ResourceGroupsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ResourceGroups Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResourceGroupsEndpointProviderBase =
    EndpointProviderBase<ResourceGroupsClientConfiguration, ResourceGroupsBuiltInParameters, ResourceGroupsClientContextParameters>;

using ResourceGroupsDefaultEpProviderBase =
    DefaultEndpointProvider<ResourceGroupsClientConfiguration, ResourceGroupsBuiltInParameters, ResourceGroupsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESOURCEGROUPS_API ResourceGroupsEndpointProvider : public ResourceGroupsDefaultEpProviderBase
{
public:
    using ResourceGroupsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ResourceGroupsEndpointProvider()
      : ResourceGroupsDefaultEpProviderBase(Aws::ResourceGroups::ResourceGroupsEndpointRules::Rules)
    {}

    ~ResourceGroupsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ResourceGroups
} // namespace Aws

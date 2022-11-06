/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointRules.h>


namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ResourceGroupsTaggingAPIClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ResourceGroupsTaggingAPIClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ResourceGroupsTaggingAPIBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ResourceGroupsTaggingAPI Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ResourceGroupsTaggingAPIEndpointProviderBase =
    EndpointProviderBase<ResourceGroupsTaggingAPIClientConfiguration, ResourceGroupsTaggingAPIBuiltInParameters, ResourceGroupsTaggingAPIClientContextParameters>;

using ResourceGroupsTaggingAPIDefaultEpProviderBase =
    DefaultEndpointProvider<ResourceGroupsTaggingAPIClientConfiguration, ResourceGroupsTaggingAPIBuiltInParameters, ResourceGroupsTaggingAPIClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIEndpointProvider : public ResourceGroupsTaggingAPIDefaultEpProviderBase
{
public:
    using ResourceGroupsTaggingAPIResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ResourceGroupsTaggingAPIEndpointProvider()
      : ResourceGroupsTaggingAPIDefaultEpProviderBase(Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIEndpointRules::Rules)
    {}

    ~ResourceGroupsTaggingAPIEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws

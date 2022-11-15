/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workspaces/WorkSpacesEndpointRules.h>


namespace Aws
{
namespace WorkSpaces
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkSpacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkSpacesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkSpacesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkSpaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkSpacesEndpointProviderBase =
    EndpointProviderBase<WorkSpacesClientConfiguration, WorkSpacesBuiltInParameters, WorkSpacesClientContextParameters>;

using WorkSpacesDefaultEpProviderBase =
    DefaultEndpointProvider<WorkSpacesClientConfiguration, WorkSpacesBuiltInParameters, WorkSpacesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACES_API WorkSpacesEndpointProvider : public WorkSpacesDefaultEpProviderBase
{
public:
    using WorkSpacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkSpacesEndpointProvider()
      : WorkSpacesDefaultEpProviderBase(Aws::WorkSpaces::WorkSpacesEndpointRules::Rules)
    {}

    ~WorkSpacesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkSpaces
} // namespace Aws

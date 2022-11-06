/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workspaces-web/WorkSpacesWebEndpointRules.h>


namespace Aws
{
namespace WorkSpacesWeb
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkSpacesWebClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkSpacesWebClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkSpacesWebBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkSpacesWeb Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkSpacesWebEndpointProviderBase =
    EndpointProviderBase<WorkSpacesWebClientConfiguration, WorkSpacesWebBuiltInParameters, WorkSpacesWebClientContextParameters>;

using WorkSpacesWebDefaultEpProviderBase =
    DefaultEndpointProvider<WorkSpacesWebClientConfiguration, WorkSpacesWebBuiltInParameters, WorkSpacesWebClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACESWEB_API WorkSpacesWebEndpointProvider : public WorkSpacesWebDefaultEpProviderBase
{
public:
    using WorkSpacesWebResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkSpacesWebEndpointProvider()
      : WorkSpacesWebDefaultEpProviderBase(Aws::WorkSpacesWeb::WorkSpacesWebEndpointRules::Rules)
    {}

    ~WorkSpacesWebEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkSpacesWeb
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appsync/AppSyncEndpointRules.h>


namespace Aws
{
namespace AppSync
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppSyncClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppSyncBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppSync Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppSyncEndpointProviderBase =
    EndpointProviderBase<AppSyncClientConfiguration, AppSyncBuiltInParameters, AppSyncClientContextParameters>;

using AppSyncDefaultEpProviderBase =
    DefaultEndpointProvider<AppSyncClientConfiguration, AppSyncBuiltInParameters, AppSyncClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPSYNC_API AppSyncEndpointProvider : public AppSyncDefaultEpProviderBase
{
public:
    using AppSyncResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppSyncEndpointProvider()
      : AppSyncDefaultEpProviderBase(Aws::AppSync::AppSyncEndpointRules::Rules)
    {}

    ~AppSyncEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppSync
} // namespace Aws

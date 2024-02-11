/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appfabric/AppFabricEndpointRules.h>


namespace Aws
{
namespace AppFabric
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppFabricClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppFabricClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppFabricBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppFabric Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppFabricEndpointProviderBase =
    EndpointProviderBase<AppFabricClientConfiguration, AppFabricBuiltInParameters, AppFabricClientContextParameters>;

using AppFabricDefaultEpProviderBase =
    DefaultEndpointProvider<AppFabricClientConfiguration, AppFabricBuiltInParameters, AppFabricClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPFABRIC_API AppFabricEndpointProvider : public AppFabricDefaultEpProviderBase
{
public:
    using AppFabricResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppFabricEndpointProvider()
      : AppFabricDefaultEpProviderBase(Aws::AppFabric::AppFabricEndpointRules::GetRulesBlob(), Aws::AppFabric::AppFabricEndpointRules::RulesBlobSize)
    {}

    ~AppFabricEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppFabric
} // namespace Aws

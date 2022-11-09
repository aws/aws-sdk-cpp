/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/servicecatalog-appregistry/AppRegistryEndpointRules.h>


namespace Aws
{
namespace AppRegistry
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppRegistryClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppRegistryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppRegistryBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppRegistry Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppRegistryEndpointProviderBase =
    EndpointProviderBase<AppRegistryClientConfiguration, AppRegistryBuiltInParameters, AppRegistryClientContextParameters>;

using AppRegistryDefaultEpProviderBase =
    DefaultEndpointProvider<AppRegistryClientConfiguration, AppRegistryBuiltInParameters, AppRegistryClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPREGISTRY_API AppRegistryEndpointProvider : public AppRegistryDefaultEpProviderBase
{
public:
    using AppRegistryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppRegistryEndpointProvider()
      : AppRegistryDefaultEpProviderBase(Aws::AppRegistry::AppRegistryEndpointRules::Rules)
    {}

    ~AppRegistryEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppRegistry
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appconfig/AppConfigEndpointRules.h>


namespace Aws
{
namespace AppConfig
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppConfigClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppConfigBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppConfig Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppConfigEndpointProviderBase =
    EndpointProviderBase<AppConfigClientConfiguration, AppConfigBuiltInParameters, AppConfigClientContextParameters>;

using AppConfigDefaultEpProviderBase =
    DefaultEndpointProvider<AppConfigClientConfiguration, AppConfigBuiltInParameters, AppConfigClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPCONFIG_API AppConfigEndpointProvider : public AppConfigDefaultEpProviderBase
{
public:
    using AppConfigResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppConfigEndpointProvider()
      : AppConfigDefaultEpProviderBase(Aws::AppConfig::AppConfigEndpointRules::Rules)
    {}

    ~AppConfigEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppConfig
} // namespace Aws

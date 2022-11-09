/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appconfigdata/AppConfigDataEndpointRules.h>


namespace Aws
{
namespace AppConfigData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppConfigDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppConfigDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppConfigDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppConfigData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppConfigDataEndpointProviderBase =
    EndpointProviderBase<AppConfigDataClientConfiguration, AppConfigDataBuiltInParameters, AppConfigDataClientContextParameters>;

using AppConfigDataDefaultEpProviderBase =
    DefaultEndpointProvider<AppConfigDataClientConfiguration, AppConfigDataBuiltInParameters, AppConfigDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPCONFIGDATA_API AppConfigDataEndpointProvider : public AppConfigDataDefaultEpProviderBase
{
public:
    using AppConfigDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppConfigDataEndpointProvider()
      : AppConfigDataDefaultEpProviderBase(Aws::AppConfigData::AppConfigDataEndpointRules::Rules)
    {}

    ~AppConfigDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppConfigData
} // namespace Aws

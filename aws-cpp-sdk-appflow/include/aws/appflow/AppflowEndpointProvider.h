/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appflow/AppflowEndpointRules.h>


namespace Aws
{
namespace Appflow
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppflowClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppflowClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppflowBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Appflow Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppflowEndpointProviderBase =
    EndpointProviderBase<AppflowClientConfiguration, AppflowBuiltInParameters, AppflowClientContextParameters>;

using AppflowDefaultEpProviderBase =
    DefaultEndpointProvider<AppflowClientConfiguration, AppflowBuiltInParameters, AppflowClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPFLOW_API AppflowEndpointProvider : public AppflowDefaultEpProviderBase
{
public:
    using AppflowResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppflowEndpointProvider()
      : AppflowDefaultEpProviderBase(Aws::Appflow::AppflowEndpointRules::Rules)
    {}

    ~AppflowEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Appflow
} // namespace Aws

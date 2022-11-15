/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/apprunner/AppRunnerEndpointRules.h>


namespace Aws
{
namespace AppRunner
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AppRunnerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AppRunnerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AppRunnerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AppRunner Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AppRunnerEndpointProviderBase =
    EndpointProviderBase<AppRunnerClientConfiguration, AppRunnerBuiltInParameters, AppRunnerClientContextParameters>;

using AppRunnerDefaultEpProviderBase =
    DefaultEndpointProvider<AppRunnerClientConfiguration, AppRunnerBuiltInParameters, AppRunnerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPRUNNER_API AppRunnerEndpointProvider : public AppRunnerDefaultEpProviderBase
{
public:
    using AppRunnerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AppRunnerEndpointProvider()
      : AppRunnerDefaultEpProviderBase(Aws::AppRunner::AppRunnerEndpointRules::Rules)
    {}

    ~AppRunnerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AppRunner
} // namespace Aws

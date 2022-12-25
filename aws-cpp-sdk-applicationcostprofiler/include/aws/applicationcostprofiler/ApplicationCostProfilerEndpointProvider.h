/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointRules.h>


namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ApplicationCostProfilerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApplicationCostProfilerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ApplicationCostProfilerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApplicationCostProfiler Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationCostProfilerEndpointProviderBase =
    EndpointProviderBase<ApplicationCostProfilerClientConfiguration, ApplicationCostProfilerBuiltInParameters, ApplicationCostProfilerClientContextParameters>;

using ApplicationCostProfilerDefaultEpProviderBase =
    DefaultEndpointProvider<ApplicationCostProfilerClientConfiguration, ApplicationCostProfilerBuiltInParameters, ApplicationCostProfilerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONCOSTPROFILER_API ApplicationCostProfilerEndpointProvider : public ApplicationCostProfilerDefaultEpProviderBase
{
public:
    using ApplicationCostProfilerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ApplicationCostProfilerEndpointProvider()
      : ApplicationCostProfilerDefaultEpProviderBase(Aws::ApplicationCostProfiler::ApplicationCostProfilerEndpointRules::Rules)
    {}

    ~ApplicationCostProfilerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ApplicationCostProfiler
} // namespace Aws

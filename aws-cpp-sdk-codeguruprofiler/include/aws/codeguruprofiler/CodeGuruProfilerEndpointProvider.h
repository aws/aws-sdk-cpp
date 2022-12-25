/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codeguruprofiler/CodeGuruProfilerEndpointRules.h>


namespace Aws
{
namespace CodeGuruProfiler
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeGuruProfilerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeGuruProfilerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeGuruProfilerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeGuruProfiler Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeGuruProfilerEndpointProviderBase =
    EndpointProviderBase<CodeGuruProfilerClientConfiguration, CodeGuruProfilerBuiltInParameters, CodeGuruProfilerClientContextParameters>;

using CodeGuruProfilerDefaultEpProviderBase =
    DefaultEndpointProvider<CodeGuruProfilerClientConfiguration, CodeGuruProfilerBuiltInParameters, CodeGuruProfilerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEGURUPROFILER_API CodeGuruProfilerEndpointProvider : public CodeGuruProfilerDefaultEpProviderBase
{
public:
    using CodeGuruProfilerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeGuruProfilerEndpointProvider()
      : CodeGuruProfilerDefaultEpProviderBase(Aws::CodeGuruProfiler::CodeGuruProfilerEndpointRules::Rules)
    {}

    ~CodeGuruProfilerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeGuruProfiler
} // namespace Aws

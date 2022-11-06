/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codepipeline/CodePipelineEndpointRules.h>


namespace Aws
{
namespace CodePipeline
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodePipelineClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodePipelineClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodePipelineBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodePipeline Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodePipelineEndpointProviderBase =
    EndpointProviderBase<CodePipelineClientConfiguration, CodePipelineBuiltInParameters, CodePipelineClientContextParameters>;

using CodePipelineDefaultEpProviderBase =
    DefaultEndpointProvider<CodePipelineClientConfiguration, CodePipelineBuiltInParameters, CodePipelineClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEPIPELINE_API CodePipelineEndpointProvider : public CodePipelineDefaultEpProviderBase
{
public:
    using CodePipelineResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodePipelineEndpointProvider()
      : CodePipelineDefaultEpProviderBase(Aws::CodePipeline::CodePipelineEndpointRules::Rules)
    {}

    ~CodePipelineEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodePipeline
} // namespace Aws

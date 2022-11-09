/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codebuild/CodeBuildEndpointRules.h>


namespace Aws
{
namespace CodeBuild
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeBuildClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeBuildClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeBuildBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeBuild Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeBuildEndpointProviderBase =
    EndpointProviderBase<CodeBuildClientConfiguration, CodeBuildBuiltInParameters, CodeBuildClientContextParameters>;

using CodeBuildDefaultEpProviderBase =
    DefaultEndpointProvider<CodeBuildClientConfiguration, CodeBuildBuiltInParameters, CodeBuildClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEBUILD_API CodeBuildEndpointProvider : public CodeBuildDefaultEpProviderBase
{
public:
    using CodeBuildResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeBuildEndpointProvider()
      : CodeBuildDefaultEpProviderBase(Aws::CodeBuild::CodeBuildEndpointRules::Rules)
    {}

    ~CodeBuildEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeBuild
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codeartifact/CodeArtifactEndpointRules.h>


namespace Aws
{
namespace CodeArtifact
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeArtifactClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeArtifactClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeArtifactBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeArtifact Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeArtifactEndpointProviderBase =
    EndpointProviderBase<CodeArtifactClientConfiguration, CodeArtifactBuiltInParameters, CodeArtifactClientContextParameters>;

using CodeArtifactDefaultEpProviderBase =
    DefaultEndpointProvider<CodeArtifactClientConfiguration, CodeArtifactBuiltInParameters, CodeArtifactClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEARTIFACT_API CodeArtifactEndpointProvider : public CodeArtifactDefaultEpProviderBase
{
public:
    using CodeArtifactResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeArtifactEndpointProvider()
      : CodeArtifactDefaultEpProviderBase(Aws::CodeArtifact::CodeArtifactEndpointRules::Rules)
    {}

    ~CodeArtifactEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeArtifact
} // namespace Aws

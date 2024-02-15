/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/artifact/ArtifactEndpointRules.h>


namespace Aws
{
namespace Artifact
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ArtifactClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ArtifactClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ArtifactBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Artifact Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ArtifactEndpointProviderBase =
    EndpointProviderBase<ArtifactClientConfiguration, ArtifactBuiltInParameters, ArtifactClientContextParameters>;

using ArtifactDefaultEpProviderBase =
    DefaultEndpointProvider<ArtifactClientConfiguration, ArtifactBuiltInParameters, ArtifactClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ARTIFACT_API ArtifactEndpointProvider : public ArtifactDefaultEpProviderBase
{
public:
    using ArtifactResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ArtifactEndpointProvider()
      : ArtifactDefaultEpProviderBase(Aws::Artifact::ArtifactEndpointRules::GetRulesBlob(), Aws::Artifact::ArtifactEndpointRules::RulesBlobSize)
    {}

    ~ArtifactEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Artifact
} // namespace Aws

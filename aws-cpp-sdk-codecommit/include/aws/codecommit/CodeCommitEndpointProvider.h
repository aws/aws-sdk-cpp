/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codecommit/CodeCommitEndpointRules.h>


namespace Aws
{
namespace CodeCommit
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeCommitClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeCommitClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeCommitBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeCommit Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeCommitEndpointProviderBase =
    EndpointProviderBase<CodeCommitClientConfiguration, CodeCommitBuiltInParameters, CodeCommitClientContextParameters>;

using CodeCommitDefaultEpProviderBase =
    DefaultEndpointProvider<CodeCommitClientConfiguration, CodeCommitBuiltInParameters, CodeCommitClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODECOMMIT_API CodeCommitEndpointProvider : public CodeCommitDefaultEpProviderBase
{
public:
    using CodeCommitResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeCommitEndpointProvider()
      : CodeCommitDefaultEpProviderBase(Aws::CodeCommit::CodeCommitEndpointRules::Rules)
    {}

    ~CodeCommitEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeCommit
} // namespace Aws

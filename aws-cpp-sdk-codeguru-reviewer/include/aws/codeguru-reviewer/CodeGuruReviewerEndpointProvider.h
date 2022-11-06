/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointRules.h>


namespace Aws
{
namespace CodeGuruReviewer
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeGuruReviewerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeGuruReviewerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeGuruReviewerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeGuruReviewer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeGuruReviewerEndpointProviderBase =
    EndpointProviderBase<CodeGuruReviewerClientConfiguration, CodeGuruReviewerBuiltInParameters, CodeGuruReviewerClientContextParameters>;

using CodeGuruReviewerDefaultEpProviderBase =
    DefaultEndpointProvider<CodeGuruReviewerClientConfiguration, CodeGuruReviewerBuiltInParameters, CodeGuruReviewerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODEGURUREVIEWER_API CodeGuruReviewerEndpointProvider : public CodeGuruReviewerDefaultEpProviderBase
{
public:
    using CodeGuruReviewerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeGuruReviewerEndpointProvider()
      : CodeGuruReviewerDefaultEpProviderBase(Aws::CodeGuruReviewer::CodeGuruReviewerEndpointRules::Rules)
    {}

    ~CodeGuruReviewerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeGuruReviewer
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeGuruReviewerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeGuruReviewerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeGuruReviewerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeGuruReviewerEndpointProvider,
                                                                        CodeGuruReviewerBuiltInParameters,
                                                                        CodeGuruReviewerClientContextParameters>;


class CodeGuruReviewerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeGuruReviewerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeGuruReviewerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeGuruReviewer::CodeGuruReviewerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeGuruReviewerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeGuruReviewerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeGuruReviewerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeGuruReviewer
} // namespace Aws

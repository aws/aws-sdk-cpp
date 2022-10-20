/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodePipelineClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodePipelineBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodePipelineEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodePipelineEndpointProvider,
                                                                        CodePipelineBuiltInParameters,
                                                                        CodePipelineClientContextParameters>;


class CodePipelineEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodePipelineResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodePipelineEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodePipeline::CodePipelineEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodePipelineResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodePipelineEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodePipelineEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodePipeline
} // namespace Aws

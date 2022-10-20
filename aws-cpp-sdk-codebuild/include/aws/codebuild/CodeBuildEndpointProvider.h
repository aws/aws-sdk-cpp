/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeBuildClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeBuildBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeBuildEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeBuildEndpointProvider,
                                                                        CodeBuildBuiltInParameters,
                                                                        CodeBuildClientContextParameters>;


class CodeBuildEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeBuildResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeBuildEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeBuild::CodeBuildEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeBuildResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeBuildEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeBuildEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeBuild
} // namespace Aws

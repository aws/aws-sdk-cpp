/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeArtifactClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeArtifactBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeArtifactEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeArtifactEndpointProvider,
                                                                        CodeArtifactBuiltInParameters,
                                                                        CodeArtifactClientContextParameters>;


class CodeArtifactEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeArtifactResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeArtifactEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeArtifact::CodeArtifactEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeArtifactResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeArtifactEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeArtifactEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeArtifact
} // namespace Aws

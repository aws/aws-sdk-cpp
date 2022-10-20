/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeCommitClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeCommitBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeCommitEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeCommitEndpointProvider,
                                                                        CodeCommitBuiltInParameters,
                                                                        CodeCommitClientContextParameters>;


class CodeCommitEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeCommitResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeCommitEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeCommit::CodeCommitEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeCommitResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeCommitEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeCommitEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeCommit
} // namespace Aws

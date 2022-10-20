/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codestar-connections/CodeStarconnectionsEndpointRules.h>


namespace Aws
{
namespace CodeStarconnections
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeStarconnectionsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeStarconnectionsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeStarconnectionsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeStarconnectionsEndpointProvider,
                                                                        CodeStarconnectionsBuiltInParameters,
                                                                        CodeStarconnectionsClientContextParameters>;


class CodeStarconnectionsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeStarconnectionsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeStarconnectionsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeStarconnections::CodeStarconnectionsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeStarconnectionsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeStarconnectionsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeStarconnectionsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeStarconnections
} // namespace Aws

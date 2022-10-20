/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/accessanalyzer/AccessAnalyzerEndpointRules.h>


namespace Aws
{
namespace AccessAnalyzer
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AccessAnalyzerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AccessAnalyzerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AccessAnalyzerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AccessAnalyzerEndpointProvider,
                                                                        AccessAnalyzerBuiltInParameters,
                                                                        AccessAnalyzerClientContextParameters>;


class AccessAnalyzerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AccessAnalyzerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AccessAnalyzerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AccessAnalyzer::AccessAnalyzerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AccessAnalyzerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AccessAnalyzerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AccessAnalyzerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AccessAnalyzer
} // namespace Aws

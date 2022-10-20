/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codeguruprofiler/CodeGuruProfilerEndpointRules.h>


namespace Aws
{
namespace CodeGuruProfiler
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CodeGuruProfilerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CodeGuruProfilerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CodeGuruProfilerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CodeGuruProfilerEndpointProvider,
                                                                        CodeGuruProfilerBuiltInParameters,
                                                                        CodeGuruProfilerClientContextParameters>;


class CodeGuruProfilerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CodeGuruProfilerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CodeGuruProfilerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CodeGuruProfiler::CodeGuruProfilerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CodeGuruProfilerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CodeGuruProfilerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CodeGuruProfilerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CodeGuruProfiler
} // namespace Aws

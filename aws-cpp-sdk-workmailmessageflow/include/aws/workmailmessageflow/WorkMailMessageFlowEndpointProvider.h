/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointRules.h>


namespace Aws
{
namespace WorkMailMessageFlow
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WorkMailMessageFlowClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WorkMailMessageFlowBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WorkMailMessageFlowEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WorkMailMessageFlowEndpointProvider,
                                                                        WorkMailMessageFlowBuiltInParameters,
                                                                        WorkMailMessageFlowClientContextParameters>;


class WorkMailMessageFlowEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WorkMailMessageFlowResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WorkMailMessageFlowEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WorkMailMessageFlow::WorkMailMessageFlowEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WorkMailMessageFlowResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WorkMailMessageFlowEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WorkMailMessageFlowEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WorkMailMessageFlow
} // namespace Aws

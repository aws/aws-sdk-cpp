/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/worklink/WorkLinkEndpointRules.h>


namespace Aws
{
namespace WorkLink
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WorkLinkClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WorkLinkBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WorkLinkEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WorkLinkEndpointProvider,
                                                                        WorkLinkBuiltInParameters,
                                                                        WorkLinkClientContextParameters>;


class WorkLinkEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WorkLinkResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WorkLinkEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WorkLink::WorkLinkEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WorkLinkResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WorkLinkEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WorkLinkEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WorkLink
} // namespace Aws

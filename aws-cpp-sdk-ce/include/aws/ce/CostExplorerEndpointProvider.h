/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ce/CostExplorerEndpointRules.h>


namespace Aws
{
namespace CostExplorer
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CostExplorerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CostExplorerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CostExplorerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CostExplorerEndpointProvider,
                                                                        CostExplorerBuiltInParameters,
                                                                        CostExplorerClientContextParameters>;


class CostExplorerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CostExplorerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CostExplorerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CostExplorer::CostExplorerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CostExplorerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CostExplorerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CostExplorerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CostExplorer
} // namespace Aws

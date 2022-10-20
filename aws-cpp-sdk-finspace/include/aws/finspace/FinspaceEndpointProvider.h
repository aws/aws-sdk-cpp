/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/finspace/FinspaceEndpointRules.h>


namespace Aws
{
namespace finspace
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FinspaceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FinspaceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FinspaceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FinspaceEndpointProvider,
                                                                        FinspaceBuiltInParameters,
                                                                        FinspaceClientContextParameters>;


class FinspaceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FinspaceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FinspaceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::finspace::FinspaceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FinspaceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FinspaceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FinspaceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace finspace
} // namespace Aws

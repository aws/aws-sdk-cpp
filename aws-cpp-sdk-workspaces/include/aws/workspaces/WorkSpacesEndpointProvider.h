/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workspaces/WorkSpacesEndpointRules.h>


namespace Aws
{
namespace WorkSpaces
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WorkSpacesClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WorkSpacesBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WorkSpacesEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WorkSpacesEndpointProvider,
                                                                        WorkSpacesBuiltInParameters,
                                                                        WorkSpacesClientContextParameters>;


class WorkSpacesEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WorkSpacesResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WorkSpacesEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WorkSpaces::WorkSpacesEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WorkSpacesResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WorkSpacesEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WorkSpacesEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WorkSpaces
} // namespace Aws

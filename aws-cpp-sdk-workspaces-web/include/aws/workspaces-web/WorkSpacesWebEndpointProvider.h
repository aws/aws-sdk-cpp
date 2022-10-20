/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workspaces-web/WorkSpacesWebEndpointRules.h>


namespace Aws
{
namespace WorkSpacesWeb
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WorkSpacesWebClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WorkSpacesWebBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WorkSpacesWebEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WorkSpacesWebEndpointProvider,
                                                                        WorkSpacesWebBuiltInParameters,
                                                                        WorkSpacesWebClientContextParameters>;


class WorkSpacesWebEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WorkSpacesWebResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WorkSpacesWebEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WorkSpacesWeb::WorkSpacesWebEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WorkSpacesWebResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WorkSpacesWebEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WorkSpacesWebEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WorkSpacesWeb
} // namespace Aws

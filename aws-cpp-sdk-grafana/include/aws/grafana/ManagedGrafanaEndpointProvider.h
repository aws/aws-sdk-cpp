/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/grafana/ManagedGrafanaEndpointRules.h>


namespace Aws
{
namespace ManagedGrafana
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ManagedGrafanaClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ManagedGrafanaBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ManagedGrafanaEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ManagedGrafanaEndpointProvider,
                                                                        ManagedGrafanaBuiltInParameters,
                                                                        ManagedGrafanaClientContextParameters>;


class ManagedGrafanaEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ManagedGrafanaResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ManagedGrafanaEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ManagedGrafana::ManagedGrafanaEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ManagedGrafanaResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ManagedGrafanaEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ManagedGrafanaEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ManagedGrafana
} // namespace Aws

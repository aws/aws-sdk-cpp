/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-incidents/SSMIncidentsEndpointRules.h>


namespace Aws
{
namespace SSMIncidents
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SSMIncidentsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SSMIncidentsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SSMIncidentsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SSMIncidentsEndpointProvider,
                                                                        SSMIncidentsBuiltInParameters,
                                                                        SSMIncidentsClientContextParameters>;


class SSMIncidentsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SSMIncidentsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SSMIncidentsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SSMIncidents::SSMIncidentsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SSMIncidentsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SSMIncidentsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SSMIncidentsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SSMIncidents
} // namespace Aws

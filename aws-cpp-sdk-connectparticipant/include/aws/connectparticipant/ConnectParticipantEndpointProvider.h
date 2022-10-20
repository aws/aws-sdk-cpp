/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connectparticipant/ConnectParticipantEndpointRules.h>


namespace Aws
{
namespace ConnectParticipant
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ConnectParticipantClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ConnectParticipantBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ConnectParticipantEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ConnectParticipantEndpointProvider,
                                                                        ConnectParticipantBuiltInParameters,
                                                                        ConnectParticipantClientContextParameters>;


class ConnectParticipantEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ConnectParticipantResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ConnectParticipantEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ConnectParticipant::ConnectParticipantEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ConnectParticipantResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ConnectParticipantEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ConnectParticipantEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ConnectParticipant
} // namespace Aws

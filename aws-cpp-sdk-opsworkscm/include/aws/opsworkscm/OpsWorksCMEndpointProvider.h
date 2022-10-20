/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/opsworkscm/OpsWorksCMEndpointRules.h>


namespace Aws
{
namespace OpsWorksCM
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using OpsWorksCMClientContextParameters = Aws::Endpoint::ClientContextParameters;
using OpsWorksCMBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class OpsWorksCMEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<OpsWorksCMEndpointProvider,
                                                                        OpsWorksCMBuiltInParameters,
                                                                        OpsWorksCMClientContextParameters>;


class OpsWorksCMEndpointProvider : public DefaultEndpointProviderT
{
public:
    using OpsWorksCMResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    OpsWorksCMEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::OpsWorksCM::OpsWorksCMEndpointRules::Rules),
        clientConfiguration(config)
    {}

    OpsWorksCMResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<OpsWorksCMEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~OpsWorksCMEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace OpsWorksCM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/guardduty/GuardDutyEndpointRules.h>


namespace Aws
{
namespace GuardDuty
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GuardDutyClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GuardDutyBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GuardDutyEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GuardDutyEndpointProvider,
                                                                        GuardDutyBuiltInParameters,
                                                                        GuardDutyClientContextParameters>;


class GuardDutyEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GuardDutyResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GuardDutyEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GuardDuty::GuardDutyEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GuardDutyResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GuardDutyEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GuardDutyEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GuardDuty
} // namespace Aws

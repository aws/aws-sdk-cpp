/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointRules.h>


namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Route53RecoveryControlConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Route53RecoveryControlConfigBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Route53RecoveryControlConfigEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Route53RecoveryControlConfigEndpointProvider,
                                                                        Route53RecoveryControlConfigBuiltInParameters,
                                                                        Route53RecoveryControlConfigClientContextParameters>;


class Route53RecoveryControlConfigEndpointProvider : public DefaultEndpointProviderT
{
public:
    using Route53RecoveryControlConfigResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Route53RecoveryControlConfigEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigEndpointRules::Rules),
        clientConfiguration(config)
    {}

    Route53RecoveryControlConfigResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Route53RecoveryControlConfigEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Route53RecoveryControlConfigEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Route53RecoveryControlConfig
} // namespace Aws

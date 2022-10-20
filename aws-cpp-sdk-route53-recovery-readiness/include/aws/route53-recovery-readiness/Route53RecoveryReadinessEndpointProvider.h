/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointRules.h>


namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Route53RecoveryReadinessClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Route53RecoveryReadinessBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Route53RecoveryReadinessEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Route53RecoveryReadinessEndpointProvider,
                                                                        Route53RecoveryReadinessBuiltInParameters,
                                                                        Route53RecoveryReadinessClientContextParameters>;


class Route53RecoveryReadinessEndpointProvider : public DefaultEndpointProviderT
{
public:
    using Route53RecoveryReadinessResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Route53RecoveryReadinessEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Route53RecoveryReadiness::Route53RecoveryReadinessEndpointRules::Rules),
        clientConfiguration(config)
    {}

    Route53RecoveryReadinessResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Route53RecoveryReadinessEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Route53RecoveryReadinessEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Route53RecoveryReadiness
} // namespace Aws

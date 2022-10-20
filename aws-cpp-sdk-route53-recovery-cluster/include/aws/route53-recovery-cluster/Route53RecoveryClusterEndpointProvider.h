/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointRules.h>


namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Route53RecoveryClusterClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Route53RecoveryClusterBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Route53RecoveryClusterEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Route53RecoveryClusterEndpointProvider,
                                                                        Route53RecoveryClusterBuiltInParameters,
                                                                        Route53RecoveryClusterClientContextParameters>;


class Route53RecoveryClusterEndpointProvider : public DefaultEndpointProviderT
{
public:
    using Route53RecoveryClusterResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Route53RecoveryClusterEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Route53RecoveryCluster::Route53RecoveryClusterEndpointRules::Rules),
        clientConfiguration(config)
    {}

    Route53RecoveryClusterResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Route53RecoveryClusterEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Route53RecoveryClusterEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Route53RecoveryCluster
} // namespace Aws

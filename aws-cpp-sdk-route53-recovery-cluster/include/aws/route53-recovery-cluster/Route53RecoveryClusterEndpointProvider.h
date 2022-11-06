/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53RecoveryClusterClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53RecoveryClusterClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Route53RecoveryClusterBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53RecoveryCluster Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53RecoveryClusterEndpointProviderBase =
    EndpointProviderBase<Route53RecoveryClusterClientConfiguration, Route53RecoveryClusterBuiltInParameters, Route53RecoveryClusterClientContextParameters>;

using Route53RecoveryClusterDefaultEpProviderBase =
    DefaultEndpointProvider<Route53RecoveryClusterClientConfiguration, Route53RecoveryClusterBuiltInParameters, Route53RecoveryClusterClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RECOVERYCLUSTER_API Route53RecoveryClusterEndpointProvider : public Route53RecoveryClusterDefaultEpProviderBase
{
public:
    using Route53RecoveryClusterResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53RecoveryClusterEndpointProvider()
      : Route53RecoveryClusterDefaultEpProviderBase(Aws::Route53RecoveryCluster::Route53RecoveryClusterEndpointRules::Rules)
    {}

    ~Route53RecoveryClusterEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53RecoveryCluster
} // namespace Aws

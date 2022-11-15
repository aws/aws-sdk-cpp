/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53RecoveryReadinessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53RecoveryReadinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Route53RecoveryReadinessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53RecoveryReadiness Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53RecoveryReadinessEndpointProviderBase =
    EndpointProviderBase<Route53RecoveryReadinessClientConfiguration, Route53RecoveryReadinessBuiltInParameters, Route53RecoveryReadinessClientContextParameters>;

using Route53RecoveryReadinessDefaultEpProviderBase =
    DefaultEndpointProvider<Route53RecoveryReadinessClientConfiguration, Route53RecoveryReadinessBuiltInParameters, Route53RecoveryReadinessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RECOVERYREADINESS_API Route53RecoveryReadinessEndpointProvider : public Route53RecoveryReadinessDefaultEpProviderBase
{
public:
    using Route53RecoveryReadinessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53RecoveryReadinessEndpointProvider()
      : Route53RecoveryReadinessDefaultEpProviderBase(Aws::Route53RecoveryReadiness::Route53RecoveryReadinessEndpointRules::Rules)
    {}

    ~Route53RecoveryReadinessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53RecoveryReadiness
} // namespace Aws

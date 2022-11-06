/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Route53RecoveryControlConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Route53RecoveryControlConfigClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Route53RecoveryControlConfigBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Route53RecoveryControlConfig Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Route53RecoveryControlConfigEndpointProviderBase =
    EndpointProviderBase<Route53RecoveryControlConfigClientConfiguration, Route53RecoveryControlConfigBuiltInParameters, Route53RecoveryControlConfigClientContextParameters>;

using Route53RecoveryControlConfigDefaultEpProviderBase =
    DefaultEndpointProvider<Route53RecoveryControlConfigClientConfiguration, Route53RecoveryControlConfigBuiltInParameters, Route53RecoveryControlConfigClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROUTE53RECOVERYCONTROLCONFIG_API Route53RecoveryControlConfigEndpointProvider : public Route53RecoveryControlConfigDefaultEpProviderBase
{
public:
    using Route53RecoveryControlConfigResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Route53RecoveryControlConfigEndpointProvider()
      : Route53RecoveryControlConfigDefaultEpProviderBase(Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigEndpointRules::Rules)
    {}

    ~Route53RecoveryControlConfigEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Route53RecoveryControlConfig
} // namespace Aws

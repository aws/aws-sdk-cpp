/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/health/HealthEndpointRules.h>


namespace Aws
{
namespace Health
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using HealthClientContextParameters = Aws::Endpoint::ClientContextParameters;

using HealthClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using HealthBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Health Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using HealthEndpointProviderBase =
    EndpointProviderBase<HealthClientConfiguration, HealthBuiltInParameters, HealthClientContextParameters>;

using HealthDefaultEpProviderBase =
    DefaultEndpointProvider<HealthClientConfiguration, HealthBuiltInParameters, HealthClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_HEALTH_API HealthEndpointProvider : public HealthDefaultEpProviderBase
{
public:
    using HealthResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    HealthEndpointProvider()
      : HealthDefaultEpProviderBase(Aws::Health::HealthEndpointRules::Rules)
    {}

    ~HealthEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Health
} // namespace Aws

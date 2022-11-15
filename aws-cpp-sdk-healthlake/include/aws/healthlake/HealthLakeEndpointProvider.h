/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/healthlake/HealthLakeEndpointRules.h>


namespace Aws
{
namespace HealthLake
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using HealthLakeClientContextParameters = Aws::Endpoint::ClientContextParameters;

using HealthLakeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using HealthLakeBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the HealthLake Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using HealthLakeEndpointProviderBase =
    EndpointProviderBase<HealthLakeClientConfiguration, HealthLakeBuiltInParameters, HealthLakeClientContextParameters>;

using HealthLakeDefaultEpProviderBase =
    DefaultEndpointProvider<HealthLakeClientConfiguration, HealthLakeBuiltInParameters, HealthLakeClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_HEALTHLAKE_API HealthLakeEndpointProvider : public HealthLakeDefaultEpProviderBase
{
public:
    using HealthLakeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    HealthLakeEndpointProvider()
      : HealthLakeDefaultEpProviderBase(Aws::HealthLake::HealthLakeEndpointRules::Rules)
    {}

    ~HealthLakeEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace HealthLake
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lookoutmetrics/LookoutMetricsEndpointRules.h>


namespace Aws
{
namespace LookoutMetrics
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LookoutMetricsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LookoutMetricsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LookoutMetricsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LookoutMetrics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LookoutMetricsEndpointProviderBase =
    EndpointProviderBase<LookoutMetricsClientConfiguration, LookoutMetricsBuiltInParameters, LookoutMetricsClientContextParameters>;

using LookoutMetricsDefaultEpProviderBase =
    DefaultEndpointProvider<LookoutMetricsClientConfiguration, LookoutMetricsBuiltInParameters, LookoutMetricsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LOOKOUTMETRICS_API LookoutMetricsEndpointProvider : public LookoutMetricsDefaultEpProviderBase
{
public:
    using LookoutMetricsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LookoutMetricsEndpointProvider()
      : LookoutMetricsDefaultEpProviderBase(Aws::LookoutMetrics::LookoutMetricsEndpointRules::Rules)
    {}

    ~LookoutMetricsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LookoutMetrics
} // namespace Aws

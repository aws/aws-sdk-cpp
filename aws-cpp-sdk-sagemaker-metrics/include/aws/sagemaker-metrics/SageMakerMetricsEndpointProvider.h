/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-metrics/SageMakerMetricsEndpointRules.h>


namespace Aws
{
namespace SageMakerMetrics
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SageMakerMetricsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SageMakerMetricsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SageMakerMetricsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SageMakerMetrics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerMetricsEndpointProviderBase =
    EndpointProviderBase<SageMakerMetricsClientConfiguration, SageMakerMetricsBuiltInParameters, SageMakerMetricsClientContextParameters>;

using SageMakerMetricsDefaultEpProviderBase =
    DefaultEndpointProvider<SageMakerMetricsClientConfiguration, SageMakerMetricsBuiltInParameters, SageMakerMetricsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERMETRICS_API SageMakerMetricsEndpointProvider : public SageMakerMetricsDefaultEpProviderBase
{
public:
    using SageMakerMetricsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SageMakerMetricsEndpointProvider()
      : SageMakerMetricsDefaultEpProviderBase(Aws::SageMakerMetrics::SageMakerMetricsEndpointRules::Rules)
    {}

    ~SageMakerMetricsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SageMakerMetrics
} // namespace Aws

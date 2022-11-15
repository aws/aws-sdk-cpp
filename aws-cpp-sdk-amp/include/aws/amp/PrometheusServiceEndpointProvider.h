/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amp/PrometheusServiceEndpointRules.h>


namespace Aws
{
namespace PrometheusService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PrometheusServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PrometheusServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PrometheusServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PrometheusService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PrometheusServiceEndpointProviderBase =
    EndpointProviderBase<PrometheusServiceClientConfiguration, PrometheusServiceBuiltInParameters, PrometheusServiceClientContextParameters>;

using PrometheusServiceDefaultEpProviderBase =
    DefaultEndpointProvider<PrometheusServiceClientConfiguration, PrometheusServiceBuiltInParameters, PrometheusServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PROMETHEUSSERVICE_API PrometheusServiceEndpointProvider : public PrometheusServiceDefaultEpProviderBase
{
public:
    using PrometheusServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PrometheusServiceEndpointProvider()
      : PrometheusServiceDefaultEpProviderBase(Aws::PrometheusService::PrometheusServiceEndpointRules::Rules)
    {}

    ~PrometheusServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PrometheusService
} // namespace Aws

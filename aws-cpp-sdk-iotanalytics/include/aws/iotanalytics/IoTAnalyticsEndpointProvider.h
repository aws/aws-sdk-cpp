/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotanalytics/IoTAnalyticsEndpointRules.h>


namespace Aws
{
namespace IoTAnalytics
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTAnalyticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTAnalyticsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTAnalytics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTAnalyticsEndpointProviderBase =
    EndpointProviderBase<IoTAnalyticsClientConfiguration, IoTAnalyticsBuiltInParameters, IoTAnalyticsClientContextParameters>;

using IoTAnalyticsDefaultEpProviderBase =
    DefaultEndpointProvider<IoTAnalyticsClientConfiguration, IoTAnalyticsBuiltInParameters, IoTAnalyticsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTANALYTICS_API IoTAnalyticsEndpointProvider : public IoTAnalyticsDefaultEpProviderBase
{
public:
    using IoTAnalyticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTAnalyticsEndpointProvider()
      : IoTAnalyticsDefaultEpProviderBase(Aws::IoTAnalytics::IoTAnalyticsEndpointRules::Rules)
    {}

    ~IoTAnalyticsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTAnalytics
} // namespace Aws

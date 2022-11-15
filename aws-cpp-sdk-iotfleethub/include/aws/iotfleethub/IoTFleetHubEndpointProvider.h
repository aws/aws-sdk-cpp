/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotfleethub/IoTFleetHubEndpointRules.h>


namespace Aws
{
namespace IoTFleetHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTFleetHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTFleetHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTFleetHubBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTFleetHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTFleetHubEndpointProviderBase =
    EndpointProviderBase<IoTFleetHubClientConfiguration, IoTFleetHubBuiltInParameters, IoTFleetHubClientContextParameters>;

using IoTFleetHubDefaultEpProviderBase =
    DefaultEndpointProvider<IoTFleetHubClientConfiguration, IoTFleetHubBuiltInParameters, IoTFleetHubClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTFLEETHUB_API IoTFleetHubEndpointProvider : public IoTFleetHubDefaultEpProviderBase
{
public:
    using IoTFleetHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTFleetHubEndpointProvider()
      : IoTFleetHubDefaultEpProviderBase(Aws::IoTFleetHub::IoTFleetHubEndpointRules::Rules)
    {}

    ~IoTFleetHubEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTFleetHub
} // namespace Aws

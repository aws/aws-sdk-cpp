/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot1click-devices/IoT1ClickDevicesServiceEndpointRules.h>


namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoT1ClickDevicesServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoT1ClickDevicesServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoT1ClickDevicesServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoT1ClickDevicesService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoT1ClickDevicesServiceEndpointProviderBase =
    EndpointProviderBase<IoT1ClickDevicesServiceClientConfiguration, IoT1ClickDevicesServiceBuiltInParameters, IoT1ClickDevicesServiceClientContextParameters>;

using IoT1ClickDevicesServiceDefaultEpProviderBase =
    DefaultEndpointProvider<IoT1ClickDevicesServiceClientConfiguration, IoT1ClickDevicesServiceBuiltInParameters, IoT1ClickDevicesServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOT1CLICKDEVICESSERVICE_API IoT1ClickDevicesServiceEndpointProvider : public IoT1ClickDevicesServiceDefaultEpProviderBase
{
public:
    using IoT1ClickDevicesServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoT1ClickDevicesServiceEndpointProvider()
      : IoT1ClickDevicesServiceDefaultEpProviderBase(Aws::IoT1ClickDevicesService::IoT1ClickDevicesServiceEndpointRules::Rules)
    {}

    ~IoT1ClickDevicesServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoT1ClickDevicesService
} // namespace Aws

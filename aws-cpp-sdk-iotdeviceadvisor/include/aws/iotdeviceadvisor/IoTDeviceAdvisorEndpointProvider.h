/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointRules.h>


namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTDeviceAdvisorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTDeviceAdvisorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTDeviceAdvisorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTDeviceAdvisor Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTDeviceAdvisorEndpointProviderBase =
    EndpointProviderBase<IoTDeviceAdvisorClientConfiguration, IoTDeviceAdvisorBuiltInParameters, IoTDeviceAdvisorClientContextParameters>;

using IoTDeviceAdvisorDefaultEpProviderBase =
    DefaultEndpointProvider<IoTDeviceAdvisorClientConfiguration, IoTDeviceAdvisorBuiltInParameters, IoTDeviceAdvisorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTDEVICEADVISOR_API IoTDeviceAdvisorEndpointProvider : public IoTDeviceAdvisorDefaultEpProviderBase
{
public:
    using IoTDeviceAdvisorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTDeviceAdvisorEndpointProvider()
      : IoTDeviceAdvisorDefaultEpProviderBase(Aws::IoTDeviceAdvisor::IoTDeviceAdvisorEndpointRules::Rules)
    {}

    ~IoTDeviceAdvisorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTDeviceAdvisor
} // namespace Aws

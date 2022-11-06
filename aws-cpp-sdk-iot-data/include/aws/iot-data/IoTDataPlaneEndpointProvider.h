/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iot-data/IoTDataPlaneEndpointRules.h>


namespace Aws
{
namespace IoTDataPlane
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTDataPlaneClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTDataPlaneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTDataPlaneBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTDataPlane Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTDataPlaneEndpointProviderBase =
    EndpointProviderBase<IoTDataPlaneClientConfiguration, IoTDataPlaneBuiltInParameters, IoTDataPlaneClientContextParameters>;

using IoTDataPlaneDefaultEpProviderBase =
    DefaultEndpointProvider<IoTDataPlaneClientConfiguration, IoTDataPlaneBuiltInParameters, IoTDataPlaneClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTDATAPLANE_API IoTDataPlaneEndpointProvider : public IoTDataPlaneDefaultEpProviderBase
{
public:
    using IoTDataPlaneResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTDataPlaneEndpointProvider()
      : IoTDataPlaneDefaultEpProviderBase(Aws::IoTDataPlane::IoTDataPlaneEndpointRules::Rules)
    {}

    ~IoTDataPlaneEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTDataPlane
} // namespace Aws

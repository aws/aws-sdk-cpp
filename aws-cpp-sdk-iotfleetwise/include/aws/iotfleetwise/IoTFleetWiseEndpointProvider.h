/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotfleetwise/IoTFleetWiseEndpointRules.h>


namespace Aws
{
namespace IoTFleetWise
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTFleetWiseClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTFleetWiseClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTFleetWiseBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTFleetWise Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTFleetWiseEndpointProviderBase =
    EndpointProviderBase<IoTFleetWiseClientConfiguration, IoTFleetWiseBuiltInParameters, IoTFleetWiseClientContextParameters>;

using IoTFleetWiseDefaultEpProviderBase =
    DefaultEndpointProvider<IoTFleetWiseClientConfiguration, IoTFleetWiseBuiltInParameters, IoTFleetWiseClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTFLEETWISE_API IoTFleetWiseEndpointProvider : public IoTFleetWiseDefaultEpProviderBase
{
public:
    using IoTFleetWiseResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTFleetWiseEndpointProvider()
      : IoTFleetWiseDefaultEpProviderBase(Aws::IoTFleetWise::IoTFleetWiseEndpointRules::Rules)
    {}

    ~IoTFleetWiseEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTFleetWise
} // namespace Aws

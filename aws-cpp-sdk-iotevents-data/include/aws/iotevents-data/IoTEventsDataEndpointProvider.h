/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotevents-data/IoTEventsDataEndpointRules.h>


namespace Aws
{
namespace IoTEventsData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTEventsDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTEventsDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTEventsDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTEventsData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTEventsDataEndpointProviderBase =
    EndpointProviderBase<IoTEventsDataClientConfiguration, IoTEventsDataBuiltInParameters, IoTEventsDataClientContextParameters>;

using IoTEventsDataDefaultEpProviderBase =
    DefaultEndpointProvider<IoTEventsDataClientConfiguration, IoTEventsDataBuiltInParameters, IoTEventsDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTEVENTSDATA_API IoTEventsDataEndpointProvider : public IoTEventsDataDefaultEpProviderBase
{
public:
    using IoTEventsDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTEventsDataEndpointProvider()
      : IoTEventsDataDefaultEpProviderBase(Aws::IoTEventsData::IoTEventsDataEndpointRules::Rules)
    {}

    ~IoTEventsDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTEventsData
} // namespace Aws

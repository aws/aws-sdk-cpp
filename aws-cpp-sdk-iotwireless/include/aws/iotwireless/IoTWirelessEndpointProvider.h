/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotwireless/IoTWirelessEndpointRules.h>


namespace Aws
{
namespace IoTWireless
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTWirelessClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTWirelessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTWirelessBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTWireless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTWirelessEndpointProviderBase =
    EndpointProviderBase<IoTWirelessClientConfiguration, IoTWirelessBuiltInParameters, IoTWirelessClientContextParameters>;

using IoTWirelessDefaultEpProviderBase =
    DefaultEndpointProvider<IoTWirelessClientConfiguration, IoTWirelessBuiltInParameters, IoTWirelessClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTWIRELESS_API IoTWirelessEndpointProvider : public IoTWirelessDefaultEpProviderBase
{
public:
    using IoTWirelessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTWirelessEndpointProvider()
      : IoTWirelessDefaultEpProviderBase(Aws::IoTWireless::IoTWirelessEndpointRules::Rules)
    {}

    ~IoTWirelessEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTWireless
} // namespace Aws

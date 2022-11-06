/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/devicefarm/DeviceFarmEndpointRules.h>


namespace Aws
{
namespace DeviceFarm
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DeviceFarmClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DeviceFarmClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DeviceFarmBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DeviceFarm Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DeviceFarmEndpointProviderBase =
    EndpointProviderBase<DeviceFarmClientConfiguration, DeviceFarmBuiltInParameters, DeviceFarmClientContextParameters>;

using DeviceFarmDefaultEpProviderBase =
    DefaultEndpointProvider<DeviceFarmClientConfiguration, DeviceFarmBuiltInParameters, DeviceFarmClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DEVICEFARM_API DeviceFarmEndpointProvider : public DeviceFarmDefaultEpProviderBase
{
public:
    using DeviceFarmResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DeviceFarmEndpointProvider()
      : DeviceFarmDefaultEpProviderBase(Aws::DeviceFarm::DeviceFarmEndpointRules::Rules)
    {}

    ~DeviceFarmEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DeviceFarm
} // namespace Aws

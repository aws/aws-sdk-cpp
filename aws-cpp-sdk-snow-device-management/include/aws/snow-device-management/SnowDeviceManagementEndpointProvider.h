/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/snow-device-management/SnowDeviceManagementEndpointRules.h>


namespace Aws
{
namespace SnowDeviceManagement
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SnowDeviceManagementClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SnowDeviceManagementClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SnowDeviceManagementBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SnowDeviceManagement Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SnowDeviceManagementEndpointProviderBase =
    EndpointProviderBase<SnowDeviceManagementClientConfiguration, SnowDeviceManagementBuiltInParameters, SnowDeviceManagementClientContextParameters>;

using SnowDeviceManagementDefaultEpProviderBase =
    DefaultEndpointProvider<SnowDeviceManagementClientConfiguration, SnowDeviceManagementBuiltInParameters, SnowDeviceManagementClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SNOWDEVICEMANAGEMENT_API SnowDeviceManagementEndpointProvider : public SnowDeviceManagementDefaultEpProviderBase
{
public:
    using SnowDeviceManagementResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SnowDeviceManagementEndpointProvider()
      : SnowDeviceManagementDefaultEpProviderBase(Aws::SnowDeviceManagement::SnowDeviceManagementEndpointRules::Rules)
    {}

    ~SnowDeviceManagementEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SnowDeviceManagement
} // namespace Aws

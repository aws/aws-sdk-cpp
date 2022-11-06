/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iottwinmaker/IoTTwinMakerEndpointRules.h>


namespace Aws
{
namespace IoTTwinMaker
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTTwinMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTTwinMakerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTTwinMakerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTTwinMaker Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTTwinMakerEndpointProviderBase =
    EndpointProviderBase<IoTTwinMakerClientConfiguration, IoTTwinMakerBuiltInParameters, IoTTwinMakerClientContextParameters>;

using IoTTwinMakerDefaultEpProviderBase =
    DefaultEndpointProvider<IoTTwinMakerClientConfiguration, IoTTwinMakerBuiltInParameters, IoTTwinMakerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTTWINMAKER_API IoTTwinMakerEndpointProvider : public IoTTwinMakerDefaultEpProviderBase
{
public:
    using IoTTwinMakerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTTwinMakerEndpointProvider()
      : IoTTwinMakerDefaultEpProviderBase(Aws::IoTTwinMaker::IoTTwinMakerEndpointRules::Rules)
    {}

    ~IoTTwinMakerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTTwinMaker
} // namespace Aws

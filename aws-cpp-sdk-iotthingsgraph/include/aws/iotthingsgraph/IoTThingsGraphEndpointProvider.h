/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iotthingsgraph/IoTThingsGraphEndpointRules.h>


namespace Aws
{
namespace IoTThingsGraph
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using IoTThingsGraphClientContextParameters = Aws::Endpoint::ClientContextParameters;

using IoTThingsGraphClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using IoTThingsGraphBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the IoTThingsGraph Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using IoTThingsGraphEndpointProviderBase =
    EndpointProviderBase<IoTThingsGraphClientConfiguration, IoTThingsGraphBuiltInParameters, IoTThingsGraphClientContextParameters>;

using IoTThingsGraphDefaultEpProviderBase =
    DefaultEndpointProvider<IoTThingsGraphClientConfiguration, IoTThingsGraphBuiltInParameters, IoTThingsGraphClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_IOTTHINGSGRAPH_API IoTThingsGraphEndpointProvider : public IoTThingsGraphDefaultEpProviderBase
{
public:
    using IoTThingsGraphResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    IoTThingsGraphEndpointProvider()
      : IoTThingsGraphDefaultEpProviderBase(Aws::IoTThingsGraph::IoTThingsGraphEndpointRules::Rules)
    {}

    ~IoTThingsGraphEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace IoTThingsGraph
} // namespace Aws

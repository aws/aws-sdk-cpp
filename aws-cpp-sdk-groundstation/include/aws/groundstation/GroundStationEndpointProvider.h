/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/groundstation/GroundStationEndpointRules.h>


namespace Aws
{
namespace GroundStation
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GroundStationClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GroundStationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GroundStationBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GroundStation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GroundStationEndpointProviderBase =
    EndpointProviderBase<GroundStationClientConfiguration, GroundStationBuiltInParameters, GroundStationClientContextParameters>;

using GroundStationDefaultEpProviderBase =
    DefaultEndpointProvider<GroundStationClientConfiguration, GroundStationBuiltInParameters, GroundStationClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GROUNDSTATION_API GroundStationEndpointProvider : public GroundStationDefaultEpProviderBase
{
public:
    using GroundStationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GroundStationEndpointProvider()
      : GroundStationDefaultEpProviderBase(Aws::GroundStation::GroundStationEndpointRules::Rules)
    {}

    ~GroundStationEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GroundStation
} // namespace Aws

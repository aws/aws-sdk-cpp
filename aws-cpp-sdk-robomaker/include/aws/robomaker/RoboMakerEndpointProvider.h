﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/robomaker/RoboMakerEndpointRules.h>


namespace Aws
{
namespace RoboMaker
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RoboMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RoboMakerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RoboMakerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RoboMaker Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RoboMakerEndpointProviderBase =
    EndpointProviderBase<RoboMakerClientConfiguration, RoboMakerBuiltInParameters, RoboMakerClientContextParameters>;

using RoboMakerDefaultEpProviderBase =
    DefaultEndpointProvider<RoboMakerClientConfiguration, RoboMakerBuiltInParameters, RoboMakerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROBOMAKER_API RoboMakerEndpointProvider : public RoboMakerDefaultEpProviderBase
{
public:
    using RoboMakerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RoboMakerEndpointProvider()
      : RoboMakerDefaultEpProviderBase(Aws::RoboMaker::RoboMakerEndpointRules::Rules)
    {}

    ~RoboMakerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RoboMaker
} // namespace Aws

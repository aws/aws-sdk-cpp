/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/controltower/ControlTowerEndpointRules.h>


namespace Aws
{
namespace ControlTower
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ControlTowerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ControlTowerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ControlTowerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ControlTower Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ControlTowerEndpointProviderBase =
    EndpointProviderBase<ControlTowerClientConfiguration, ControlTowerBuiltInParameters, ControlTowerClientContextParameters>;

using ControlTowerDefaultEpProviderBase =
    DefaultEndpointProvider<ControlTowerClientConfiguration, ControlTowerBuiltInParameters, ControlTowerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CONTROLTOWER_API ControlTowerEndpointProvider : public ControlTowerDefaultEpProviderBase
{
public:
    using ControlTowerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ControlTowerEndpointProvider()
      : ControlTowerDefaultEpProviderBase(Aws::ControlTower::ControlTowerEndpointRules::Rules)
    {}

    ~ControlTowerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ControlTower
} // namespace Aws

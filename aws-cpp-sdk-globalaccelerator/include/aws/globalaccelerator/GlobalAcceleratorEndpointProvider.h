/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/globalaccelerator/GlobalAcceleratorEndpointRules.h>


namespace Aws
{
namespace GlobalAccelerator
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GlobalAcceleratorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GlobalAcceleratorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GlobalAcceleratorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GlobalAccelerator Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GlobalAcceleratorEndpointProviderBase =
    EndpointProviderBase<GlobalAcceleratorClientConfiguration, GlobalAcceleratorBuiltInParameters, GlobalAcceleratorClientContextParameters>;

using GlobalAcceleratorDefaultEpProviderBase =
    DefaultEndpointProvider<GlobalAcceleratorClientConfiguration, GlobalAcceleratorBuiltInParameters, GlobalAcceleratorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GLOBALACCELERATOR_API GlobalAcceleratorEndpointProvider : public GlobalAcceleratorDefaultEpProviderBase
{
public:
    using GlobalAcceleratorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GlobalAcceleratorEndpointProvider()
      : GlobalAcceleratorDefaultEpProviderBase(Aws::GlobalAccelerator::GlobalAcceleratorEndpointRules::Rules)
    {}

    ~GlobalAcceleratorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GlobalAccelerator
} // namespace Aws

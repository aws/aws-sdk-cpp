/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/rolesanywhere/RolesAnywhereEndpointRules.h>


namespace Aws
{
namespace RolesAnywhere
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RolesAnywhereClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RolesAnywhereClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RolesAnywhereBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RolesAnywhere Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RolesAnywhereEndpointProviderBase =
    EndpointProviderBase<RolesAnywhereClientConfiguration, RolesAnywhereBuiltInParameters, RolesAnywhereClientContextParameters>;

using RolesAnywhereDefaultEpProviderBase =
    DefaultEndpointProvider<RolesAnywhereClientConfiguration, RolesAnywhereBuiltInParameters, RolesAnywhereClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ROLESANYWHERE_API RolesAnywhereEndpointProvider : public RolesAnywhereDefaultEpProviderBase
{
public:
    using RolesAnywhereResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RolesAnywhereEndpointProvider()
      : RolesAnywhereDefaultEpProviderBase(Aws::RolesAnywhere::RolesAnywhereEndpointRules::Rules)
    {}

    ~RolesAnywhereEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RolesAnywhere
} // namespace Aws

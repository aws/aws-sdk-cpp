/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/shield/ShieldEndpointRules.h>


namespace Aws
{
namespace Shield
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ShieldClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ShieldClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ShieldBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Shield Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ShieldEndpointProviderBase =
    EndpointProviderBase<ShieldClientConfiguration, ShieldBuiltInParameters, ShieldClientContextParameters>;

using ShieldDefaultEpProviderBase =
    DefaultEndpointProvider<ShieldClientConfiguration, ShieldBuiltInParameters, ShieldClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SHIELD_API ShieldEndpointProvider : public ShieldDefaultEpProviderBase
{
public:
    using ShieldResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ShieldEndpointProvider()
      : ShieldDefaultEpProviderBase(Aws::Shield::ShieldEndpointRules::Rules)
    {}

    ~ShieldEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Shield
} // namespace Aws

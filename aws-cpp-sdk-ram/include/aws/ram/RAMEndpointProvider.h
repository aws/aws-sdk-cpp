/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ram/RAMEndpointRules.h>


namespace Aws
{
namespace RAM
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using RAMClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RAMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using RAMBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RAM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RAMEndpointProviderBase =
    EndpointProviderBase<RAMClientConfiguration, RAMBuiltInParameters, RAMClientContextParameters>;

using RAMDefaultEpProviderBase =
    DefaultEndpointProvider<RAMClientConfiguration, RAMBuiltInParameters, RAMClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RAM_API RAMEndpointProvider : public RAMDefaultEpProviderBase
{
public:
    using RAMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    RAMEndpointProvider()
      : RAMDefaultEpProviderBase(Aws::RAM::RAMEndpointRules::Rules)
    {}

    ~RAMEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace RAM
} // namespace Aws

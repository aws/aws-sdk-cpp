/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/greengrass/GreengrassEndpointRules.h>


namespace Aws
{
namespace Greengrass
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GreengrassClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GreengrassClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GreengrassBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Greengrass Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GreengrassEndpointProviderBase =
    EndpointProviderBase<GreengrassClientConfiguration, GreengrassBuiltInParameters, GreengrassClientContextParameters>;

using GreengrassDefaultEpProviderBase =
    DefaultEndpointProvider<GreengrassClientConfiguration, GreengrassBuiltInParameters, GreengrassClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GREENGRASS_API GreengrassEndpointProvider : public GreengrassDefaultEpProviderBase
{
public:
    using GreengrassResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GreengrassEndpointProvider()
      : GreengrassDefaultEpProviderBase(Aws::Greengrass::GreengrassEndpointRules::Rules)
    {}

    ~GreengrassEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Greengrass
} // namespace Aws

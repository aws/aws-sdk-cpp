/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/greengrassv2/GreengrassV2EndpointRules.h>


namespace Aws
{
namespace GreengrassV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using GreengrassV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using GreengrassV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using GreengrassV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the GreengrassV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using GreengrassV2EndpointProviderBase =
    EndpointProviderBase<GreengrassV2ClientConfiguration, GreengrassV2BuiltInParameters, GreengrassV2ClientContextParameters>;

using GreengrassV2DefaultEpProviderBase =
    DefaultEndpointProvider<GreengrassV2ClientConfiguration, GreengrassV2BuiltInParameters, GreengrassV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_GREENGRASSV2_API GreengrassV2EndpointProvider : public GreengrassV2DefaultEpProviderBase
{
public:
    using GreengrassV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    GreengrassV2EndpointProvider()
      : GreengrassV2DefaultEpProviderBase(Aws::GreengrassV2::GreengrassV2EndpointRules::Rules)
    {}

    ~GreengrassV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace GreengrassV2
} // namespace Aws

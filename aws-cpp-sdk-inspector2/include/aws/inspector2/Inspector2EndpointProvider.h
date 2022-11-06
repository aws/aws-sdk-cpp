/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/inspector2/Inspector2EndpointRules.h>


namespace Aws
{
namespace Inspector2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Inspector2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Inspector2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Inspector2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Inspector2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Inspector2EndpointProviderBase =
    EndpointProviderBase<Inspector2ClientConfiguration, Inspector2BuiltInParameters, Inspector2ClientContextParameters>;

using Inspector2DefaultEpProviderBase =
    DefaultEndpointProvider<Inspector2ClientConfiguration, Inspector2BuiltInParameters, Inspector2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_INSPECTOR2_API Inspector2EndpointProvider : public Inspector2DefaultEpProviderBase
{
public:
    using Inspector2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Inspector2EndpointProvider()
      : Inspector2DefaultEpProviderBase(Aws::Inspector2::Inspector2EndpointRules::Rules)
    {}

    ~Inspector2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Inspector2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pi/PIEndpointRules.h>


namespace Aws
{
namespace PI
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PIClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PIClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PIBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PI Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PIEndpointProviderBase =
    EndpointProviderBase<PIClientConfiguration, PIBuiltInParameters, PIClientContextParameters>;

using PIDefaultEpProviderBase =
    DefaultEndpointProvider<PIClientConfiguration, PIBuiltInParameters, PIClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PI_API PIEndpointProvider : public PIDefaultEpProviderBase
{
public:
    using PIResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PIEndpointProvider()
      : PIDefaultEpProviderBase(Aws::PI::PIEndpointRules::Rules)
    {}

    ~PIEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PI
} // namespace Aws

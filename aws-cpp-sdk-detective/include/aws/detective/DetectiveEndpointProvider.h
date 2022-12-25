/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/detective/DetectiveEndpointRules.h>


namespace Aws
{
namespace Detective
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DetectiveClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DetectiveClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DetectiveBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Detective Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DetectiveEndpointProviderBase =
    EndpointProviderBase<DetectiveClientConfiguration, DetectiveBuiltInParameters, DetectiveClientContextParameters>;

using DetectiveDefaultEpProviderBase =
    DefaultEndpointProvider<DetectiveClientConfiguration, DetectiveBuiltInParameters, DetectiveClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DETECTIVE_API DetectiveEndpointProvider : public DetectiveDefaultEpProviderBase
{
public:
    using DetectiveResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DetectiveEndpointProvider()
      : DetectiveDefaultEpProviderBase(Aws::Detective::DetectiveEndpointRules::Rules)
    {}

    ~DetectiveEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Detective
} // namespace Aws

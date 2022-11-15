/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lightsail/LightsailEndpointRules.h>


namespace Aws
{
namespace Lightsail
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LightsailClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LightsailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LightsailBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Lightsail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LightsailEndpointProviderBase =
    EndpointProviderBase<LightsailClientConfiguration, LightsailBuiltInParameters, LightsailClientContextParameters>;

using LightsailDefaultEpProviderBase =
    DefaultEndpointProvider<LightsailClientConfiguration, LightsailBuiltInParameters, LightsailClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LIGHTSAIL_API LightsailEndpointProvider : public LightsailDefaultEpProviderBase
{
public:
    using LightsailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LightsailEndpointProvider()
      : LightsailDefaultEpProviderBase(Aws::Lightsail::LightsailEndpointRules::Rules)
    {}

    ~LightsailEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Lightsail
} // namespace Aws

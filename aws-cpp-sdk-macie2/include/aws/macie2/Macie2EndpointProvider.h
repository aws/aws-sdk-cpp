/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/macie2/Macie2EndpointRules.h>


namespace Aws
{
namespace Macie2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using Macie2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using Macie2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using Macie2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Macie2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using Macie2EndpointProviderBase =
    EndpointProviderBase<Macie2ClientConfiguration, Macie2BuiltInParameters, Macie2ClientContextParameters>;

using Macie2DefaultEpProviderBase =
    DefaultEndpointProvider<Macie2ClientConfiguration, Macie2BuiltInParameters, Macie2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MACIE2_API Macie2EndpointProvider : public Macie2DefaultEpProviderBase
{
public:
    using Macie2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    Macie2EndpointProvider()
      : Macie2DefaultEpProviderBase(Aws::Macie2::Macie2EndpointRules::Rules)
    {}

    ~Macie2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Macie2
} // namespace Aws

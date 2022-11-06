/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/polly/PollyEndpointRules.h>


namespace Aws
{
namespace Polly
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PollyClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PollyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PollyBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Polly Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PollyEndpointProviderBase =
    EndpointProviderBase<PollyClientConfiguration, PollyBuiltInParameters, PollyClientContextParameters>;

using PollyDefaultEpProviderBase =
    DefaultEndpointProvider<PollyClientConfiguration, PollyBuiltInParameters, PollyClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_POLLY_API PollyEndpointProvider : public PollyDefaultEpProviderBase
{
public:
    using PollyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PollyEndpointProvider()
      : PollyDefaultEpProviderBase(Aws::Polly::PollyEndpointRules::Rules)
    {}

    ~PollyEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Polly
} // namespace Aws

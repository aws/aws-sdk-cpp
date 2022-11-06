/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lexv2-runtime/LexRuntimeV2EndpointRules.h>


namespace Aws
{
namespace LexRuntimeV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LexRuntimeV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LexRuntimeV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LexRuntimeV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LexRuntimeV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexRuntimeV2EndpointProviderBase =
    EndpointProviderBase<LexRuntimeV2ClientConfiguration, LexRuntimeV2BuiltInParameters, LexRuntimeV2ClientContextParameters>;

using LexRuntimeV2DefaultEpProviderBase =
    DefaultEndpointProvider<LexRuntimeV2ClientConfiguration, LexRuntimeV2BuiltInParameters, LexRuntimeV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LEXRUNTIMEV2_API LexRuntimeV2EndpointProvider : public LexRuntimeV2DefaultEpProviderBase
{
public:
    using LexRuntimeV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LexRuntimeV2EndpointProvider()
      : LexRuntimeV2DefaultEpProviderBase(Aws::LexRuntimeV2::LexRuntimeV2EndpointRules::Rules)
    {}

    ~LexRuntimeV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LexRuntimeV2
} // namespace Aws

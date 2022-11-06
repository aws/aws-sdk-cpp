/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lexv2-models/LexModelsV2EndpointRules.h>


namespace Aws
{
namespace LexModelsV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LexModelsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LexModelsV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LexModelsV2BuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LexModelsV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexModelsV2EndpointProviderBase =
    EndpointProviderBase<LexModelsV2ClientConfiguration, LexModelsV2BuiltInParameters, LexModelsV2ClientContextParameters>;

using LexModelsV2DefaultEpProviderBase =
    DefaultEndpointProvider<LexModelsV2ClientConfiguration, LexModelsV2BuiltInParameters, LexModelsV2ClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LEXMODELSV2_API LexModelsV2EndpointProvider : public LexModelsV2DefaultEpProviderBase
{
public:
    using LexModelsV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LexModelsV2EndpointProvider()
      : LexModelsV2DefaultEpProviderBase(Aws::LexModelsV2::LexModelsV2EndpointRules::Rules)
    {}

    ~LexModelsV2EndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LexModelsV2
} // namespace Aws

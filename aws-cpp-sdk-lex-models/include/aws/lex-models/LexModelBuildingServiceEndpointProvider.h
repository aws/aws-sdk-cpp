/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lex-models/LexModelBuildingServiceEndpointRules.h>


namespace Aws
{
namespace LexModelBuildingService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LexModelBuildingServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LexModelBuildingServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LexModelBuildingServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LexModelBuildingService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexModelBuildingServiceEndpointProviderBase =
    EndpointProviderBase<LexModelBuildingServiceClientConfiguration, LexModelBuildingServiceBuiltInParameters, LexModelBuildingServiceClientContextParameters>;

using LexModelBuildingServiceDefaultEpProviderBase =
    DefaultEndpointProvider<LexModelBuildingServiceClientConfiguration, LexModelBuildingServiceBuiltInParameters, LexModelBuildingServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LEXMODELBUILDINGSERVICE_API LexModelBuildingServiceEndpointProvider : public LexModelBuildingServiceDefaultEpProviderBase
{
public:
    using LexModelBuildingServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LexModelBuildingServiceEndpointProvider()
      : LexModelBuildingServiceDefaultEpProviderBase(Aws::LexModelBuildingService::LexModelBuildingServiceEndpointRules::Rules)
    {}

    ~LexModelBuildingServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LexModelBuildingService
} // namespace Aws

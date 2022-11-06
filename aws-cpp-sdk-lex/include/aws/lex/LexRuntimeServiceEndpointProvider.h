/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lex/LexRuntimeServiceEndpointRules.h>


namespace Aws
{
namespace LexRuntimeService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LexRuntimeServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LexRuntimeServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LexRuntimeServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LexRuntimeService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LexRuntimeServiceEndpointProviderBase =
    EndpointProviderBase<LexRuntimeServiceClientConfiguration, LexRuntimeServiceBuiltInParameters, LexRuntimeServiceClientContextParameters>;

using LexRuntimeServiceDefaultEpProviderBase =
    DefaultEndpointProvider<LexRuntimeServiceClientConfiguration, LexRuntimeServiceBuiltInParameters, LexRuntimeServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LEXRUNTIMESERVICE_API LexRuntimeServiceEndpointProvider : public LexRuntimeServiceDefaultEpProviderBase
{
public:
    using LexRuntimeServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LexRuntimeServiceEndpointProvider()
      : LexRuntimeServiceDefaultEpProviderBase(Aws::LexRuntimeService::LexRuntimeServiceEndpointRules::Rules)
    {}

    ~LexRuntimeServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LexRuntimeService
} // namespace Aws

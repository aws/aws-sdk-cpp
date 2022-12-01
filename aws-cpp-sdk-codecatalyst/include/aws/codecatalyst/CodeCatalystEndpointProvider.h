/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codecatalyst/CodeCatalystEndpointRules.h>


namespace Aws
{
namespace CodeCatalyst
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeCatalystClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeCatalystClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeCatalystBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeCatalyst Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeCatalystEndpointProviderBase =
    EndpointProviderBase<CodeCatalystClientConfiguration, CodeCatalystBuiltInParameters, CodeCatalystClientContextParameters>;

using CodeCatalystDefaultEpProviderBase =
    DefaultEndpointProvider<CodeCatalystClientConfiguration, CodeCatalystBuiltInParameters, CodeCatalystClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODECATALYST_API CodeCatalystEndpointProvider : public CodeCatalystDefaultEpProviderBase
{
public:
    using CodeCatalystResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeCatalystEndpointProvider()
      : CodeCatalystDefaultEpProviderBase(Aws::CodeCatalyst::CodeCatalystEndpointRules::Rules)
    {}

    ~CodeCatalystEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeCatalyst
} // namespace Aws

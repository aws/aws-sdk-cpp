/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codestar-connections/CodeStarconnectionsEndpointRules.h>


namespace Aws
{
namespace CodeStarconnections
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeStarconnectionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeStarconnectionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CodeStarconnectionsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeStarconnections Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeStarconnectionsEndpointProviderBase =
    EndpointProviderBase<CodeStarconnectionsClientConfiguration, CodeStarconnectionsBuiltInParameters, CodeStarconnectionsClientContextParameters>;

using CodeStarconnectionsDefaultEpProviderBase =
    DefaultEndpointProvider<CodeStarconnectionsClientConfiguration, CodeStarconnectionsBuiltInParameters, CodeStarconnectionsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODESTARCONNECTIONS_API CodeStarconnectionsEndpointProvider : public CodeStarconnectionsDefaultEpProviderBase
{
public:
    using CodeStarconnectionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeStarconnectionsEndpointProvider()
      : CodeStarconnectionsDefaultEpProviderBase(Aws::CodeStarconnections::CodeStarconnectionsEndpointRules::Rules)
    {}

    ~CodeStarconnectionsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeStarconnections
} // namespace Aws

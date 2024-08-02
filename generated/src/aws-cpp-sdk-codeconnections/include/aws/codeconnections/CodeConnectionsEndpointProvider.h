/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/codeconnections/CodeConnectionsEndpointRules.h>


namespace Aws
{
namespace CodeConnections
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CodeConnectionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CodeConnectionsClientConfiguration = Aws::Client::GenericClientConfiguration;
using CodeConnectionsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CodeConnections Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CodeConnectionsEndpointProviderBase =
    EndpointProviderBase<CodeConnectionsClientConfiguration, CodeConnectionsBuiltInParameters, CodeConnectionsClientContextParameters>;

using CodeConnectionsDefaultEpProviderBase =
    DefaultEndpointProvider<CodeConnectionsClientConfiguration, CodeConnectionsBuiltInParameters, CodeConnectionsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CODECONNECTIONS_API CodeConnectionsEndpointProvider : public CodeConnectionsDefaultEpProviderBase
{
public:
    using CodeConnectionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CodeConnectionsEndpointProvider()
      : CodeConnectionsDefaultEpProviderBase(Aws::CodeConnections::CodeConnectionsEndpointRules::GetRulesBlob(), Aws::CodeConnections::CodeConnectionsEndpointRules::RulesBlobSize)
    {}

    ~CodeConnectionsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CodeConnections
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dsql/DSQLEndpointRules.h>


namespace Aws
{
namespace DSQL
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DSQLClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DSQLClientConfiguration = Aws::Client::GenericClientConfiguration;
using DSQLBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DSQL Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DSQLEndpointProviderBase =
    EndpointProviderBase<DSQLClientConfiguration, DSQLBuiltInParameters, DSQLClientContextParameters>;

using DSQLDefaultEpProviderBase =
    DefaultEndpointProvider<DSQLClientConfiguration, DSQLBuiltInParameters, DSQLClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DSQL_API DSQLEndpointProvider : public DSQLDefaultEpProviderBase
{
public:
    using DSQLResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DSQLEndpointProvider()
      : DSQLDefaultEpProviderBase(Aws::DSQL::DSQLEndpointRules::GetRulesBlob(), Aws::DSQL::DSQLEndpointRules::RulesBlobSize)
    {}

    ~DSQLEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DSQL
} // namespace Aws

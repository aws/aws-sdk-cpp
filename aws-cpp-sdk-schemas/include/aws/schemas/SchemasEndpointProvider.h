/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/schemas/SchemasEndpointRules.h>


namespace Aws
{
namespace Schemas
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SchemasClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SchemasClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using SchemasBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the Schemas Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SchemasEndpointProviderBase =
    EndpointProviderBase<SchemasClientConfiguration, SchemasBuiltInParameters, SchemasClientContextParameters>;

using SchemasDefaultEpProviderBase =
    DefaultEndpointProvider<SchemasClientConfiguration, SchemasBuiltInParameters, SchemasClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SCHEMAS_API SchemasEndpointProvider : public SchemasDefaultEpProviderBase
{
public:
    using SchemasResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SchemasEndpointProvider()
      : SchemasDefaultEpProviderBase(Aws::Schemas::SchemasEndpointRules::Rules)
    {}

    ~SchemasEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace Schemas
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/entityresolution/EntityResolutionEndpointRules.h>


namespace Aws
{
namespace EntityResolution
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using EntityResolutionClientContextParameters = Aws::Endpoint::ClientContextParameters;

using EntityResolutionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using EntityResolutionBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the EntityResolution Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using EntityResolutionEndpointProviderBase =
    EndpointProviderBase<EntityResolutionClientConfiguration, EntityResolutionBuiltInParameters, EntityResolutionClientContextParameters>;

using EntityResolutionDefaultEpProviderBase =
    DefaultEndpointProvider<EntityResolutionClientConfiguration, EntityResolutionBuiltInParameters, EntityResolutionClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ENTITYRESOLUTION_API EntityResolutionEndpointProvider : public EntityResolutionDefaultEpProviderBase
{
public:
    using EntityResolutionResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    EntityResolutionEndpointProvider()
      : EntityResolutionDefaultEpProviderBase(Aws::EntityResolution::EntityResolutionEndpointRules::GetRulesBlob(), Aws::EntityResolution::EntityResolutionEndpointRules::RulesBlobSize)
    {}

    ~EntityResolutionEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace EntityResolution
} // namespace Aws

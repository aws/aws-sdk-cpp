/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ecs/ECSEndpointRules.h>


namespace Aws
{
namespace ECS
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ECSClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ECSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ECSBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ECS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ECSEndpointProviderBase =
    EndpointProviderBase<ECSClientConfiguration, ECSBuiltInParameters, ECSClientContextParameters>;

using ECSDefaultEpProviderBase =
    DefaultEndpointProvider<ECSClientConfiguration, ECSBuiltInParameters, ECSClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_ECS_API ECSEndpointProvider : public ECSDefaultEpProviderBase
{
public:
    using ECSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ECSEndpointProvider()
      : ECSDefaultEpProviderBase(Aws::ECS::ECSEndpointRules::Rules)
    {}

    ~ECSEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ECS
} // namespace Aws

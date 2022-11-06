/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lakeformation/LakeFormationEndpointRules.h>


namespace Aws
{
namespace LakeFormation
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using LakeFormationClientContextParameters = Aws::Endpoint::ClientContextParameters;

using LakeFormationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using LakeFormationBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the LakeFormation Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using LakeFormationEndpointProviderBase =
    EndpointProviderBase<LakeFormationClientConfiguration, LakeFormationBuiltInParameters, LakeFormationClientContextParameters>;

using LakeFormationDefaultEpProviderBase =
    DefaultEndpointProvider<LakeFormationClientConfiguration, LakeFormationBuiltInParameters, LakeFormationClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_LAKEFORMATION_API LakeFormationEndpointProvider : public LakeFormationDefaultEpProviderBase
{
public:
    using LakeFormationResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    LakeFormationEndpointProvider()
      : LakeFormationDefaultEpProviderBase(Aws::LakeFormation::LakeFormationEndpointRules::Rules)
    {}

    ~LakeFormationEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace LakeFormation
} // namespace Aws

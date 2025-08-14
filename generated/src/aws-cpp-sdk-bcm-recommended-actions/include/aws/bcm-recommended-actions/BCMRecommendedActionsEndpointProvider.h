/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bcm-recommended-actions/BCMRecommendedActionsEndpointRules.h>


namespace Aws
{
namespace BCMRecommendedActions
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BCMRecommendedActionsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BCMRecommendedActionsClientConfiguration = Aws::Client::GenericClientConfiguration;
using BCMRecommendedActionsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BCMRecommendedActions Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMRecommendedActionsEndpointProviderBase =
    EndpointProviderBase<BCMRecommendedActionsClientConfiguration, BCMRecommendedActionsBuiltInParameters, BCMRecommendedActionsClientContextParameters>;

using BCMRecommendedActionsDefaultEpProviderBase =
    DefaultEndpointProvider<BCMRecommendedActionsClientConfiguration, BCMRecommendedActionsBuiltInParameters, BCMRecommendedActionsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BCMRECOMMENDEDACTIONS_API BCMRecommendedActionsEndpointProvider : public BCMRecommendedActionsDefaultEpProviderBase
{
public:
    using BCMRecommendedActionsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BCMRecommendedActionsEndpointProvider()
      : BCMRecommendedActionsDefaultEpProviderBase(Aws::BCMRecommendedActions::BCMRecommendedActionsEndpointRules::GetRulesBlob(), Aws::BCMRecommendedActions::BCMRecommendedActionsEndpointRules::RulesBlobSize)
    {}

    ~BCMRecommendedActionsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BCMRecommendedActions
} // namespace Aws

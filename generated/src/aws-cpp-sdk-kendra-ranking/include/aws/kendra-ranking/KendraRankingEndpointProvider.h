/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/kendra-ranking/KendraRankingEndpointRules.h>


namespace Aws
{
namespace KendraRanking
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using KendraRankingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using KendraRankingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using KendraRankingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the KendraRanking Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KendraRankingEndpointProviderBase =
    EndpointProviderBase<KendraRankingClientConfiguration, KendraRankingBuiltInParameters, KendraRankingClientContextParameters>;

using KendraRankingDefaultEpProviderBase =
    DefaultEndpointProvider<KendraRankingClientConfiguration, KendraRankingBuiltInParameters, KendraRankingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_KENDRARANKING_API KendraRankingEndpointProvider : public KendraRankingDefaultEpProviderBase
{
public:
    using KendraRankingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    KendraRankingEndpointProvider()
      : KendraRankingDefaultEpProviderBase(Aws::KendraRanking::KendraRankingEndpointRules::GetRulesBlob(), Aws::KendraRanking::KendraRankingEndpointRules::RulesBlobSize)
    {}

    ~KendraRankingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace KendraRanking
} // namespace Aws

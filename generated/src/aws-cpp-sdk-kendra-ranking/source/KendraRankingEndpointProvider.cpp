/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/KendraRankingEndpointProvider.h>
#include <aws/kendra-ranking/internal/KendraRankingEndpointRules.h>

namespace Aws {
#ifndef AWS_KENDRARANKING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KendraRanking::Endpoint::KendraRankingClientConfiguration,
                                                   KendraRanking::Endpoint::KendraRankingBuiltInParameters,
                                                   KendraRanking::Endpoint::KendraRankingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KendraRanking::Endpoint::KendraRankingClientConfiguration,
                                                  KendraRanking::Endpoint::KendraRankingBuiltInParameters,
                                                  KendraRanking::Endpoint::KendraRankingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KendraRanking {
namespace Endpoint {
KendraRankingEndpointProvider::KendraRankingEndpointProvider()
    : KendraRankingDefaultEpProviderBase(Aws::KendraRanking::KendraRankingEndpointRules::GetRulesBlob(),
                                         Aws::KendraRanking::KendraRankingEndpointRules::RulesBlobSize) {}

void KendraRankingBuiltInParameters::SetFromClientConfiguration(const KendraRankingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KendraRankingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KendraRankingBuiltInParameters::SetFromClientConfiguration(const KendraRankingClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KendraRankingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KendraRankingBuiltInParameters::SetServiceSpecificParameters(const KendraRankingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace KendraRanking
}  // namespace Aws

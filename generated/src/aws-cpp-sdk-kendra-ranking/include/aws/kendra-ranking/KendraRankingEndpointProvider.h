/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra-ranking/KendraRankingClientConfiguration.h>
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>

namespace Aws {
namespace KendraRanking {
namespace Endpoint {
using KendraRankingClientConfiguration = Aws::KendraRanking::KendraRankingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KendraRankingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KENDRARANKING_API KendraRankingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KendraRankingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KendraRankingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KendraRankingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KendraRankingClientConfiguration& config);
};

/**
 * The type for the KendraRanking Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KendraRankingEndpointProviderBase =
    EndpointProviderBase<KendraRankingClientConfiguration, KendraRankingBuiltInParameters, KendraRankingClientContextParameters>;

using KendraRankingDefaultEpProviderBase =
    BDDEndpointProvider<KendraRankingClientConfiguration, KendraRankingBuiltInParameters, KendraRankingClientContextParameters>;

}  // namespace Endpoint
}  // namespace KendraRanking

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KENDRARANKING_EXTERN template class AWS_KENDRARANKING_API Aws::Endpoint::EndpointProviderBase<
    KendraRanking::Endpoint::KendraRankingClientConfiguration, KendraRanking::Endpoint::KendraRankingBuiltInParameters,
    KendraRanking::Endpoint::KendraRankingClientContextParameters>;

AWS_KENDRARANKING_EXTERN template class AWS_KENDRARANKING_API Aws::Endpoint::BDDEndpointProvider<
    KendraRanking::Endpoint::KendraRankingClientConfiguration, KendraRanking::Endpoint::KendraRankingBuiltInParameters,
    KendraRanking::Endpoint::KendraRankingClientContextParameters>;
}  // namespace Endpoint

namespace KendraRanking {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KENDRARANKING_API KendraRankingEndpointProvider : public KendraRankingDefaultEpProviderBase {
 public:
  using KendraRankingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KendraRankingEndpointProvider();

  ~KendraRankingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KendraRanking
}  // namespace Aws

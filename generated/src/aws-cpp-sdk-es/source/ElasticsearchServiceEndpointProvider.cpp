/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/ElasticsearchServiceEndpointProvider.h>
#include <aws/es/internal/ElasticsearchServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_ELASTICSEARCHSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ElasticsearchService::Endpoint::ElasticsearchServiceClientConfiguration,
                                                   ElasticsearchService::Endpoint::ElasticsearchServiceBuiltInParameters,
                                                   ElasticsearchService::Endpoint::ElasticsearchServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ElasticsearchService::Endpoint::ElasticsearchServiceClientConfiguration,
                                                  ElasticsearchService::Endpoint::ElasticsearchServiceBuiltInParameters,
                                                  ElasticsearchService::Endpoint::ElasticsearchServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ElasticsearchService {
namespace Endpoint {
ElasticsearchServiceEndpointProvider::ElasticsearchServiceEndpointProvider()
    : ElasticsearchServiceDefaultEpProviderBase(Aws::ElasticsearchService::ElasticsearchServiceEndpointRules::GetRulesBlob(),
                                                Aws::ElasticsearchService::ElasticsearchServiceEndpointRules::RulesBlobSize) {}

void ElasticsearchServiceBuiltInParameters::SetFromClientConfiguration(const ElasticsearchServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ElasticsearchServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ElasticsearchServiceBuiltInParameters::SetFromClientConfiguration(const ElasticsearchServiceClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ElasticsearchServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ElasticsearchServiceBuiltInParameters::SetServiceSpecificParameters(const ElasticsearchServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ElasticsearchService
}  // namespace Aws

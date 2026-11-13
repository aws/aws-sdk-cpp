/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/CloudSearchEndpointProvider.h>
#include <aws/cloudsearch/internal/CloudSearchEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDSEARCH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudSearch::Endpoint::CloudSearchClientConfiguration,
                                                   CloudSearch::Endpoint::CloudSearchBuiltInParameters,
                                                   CloudSearch::Endpoint::CloudSearchClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudSearch::Endpoint::CloudSearchClientConfiguration,
                                                  CloudSearch::Endpoint::CloudSearchBuiltInParameters,
                                                  CloudSearch::Endpoint::CloudSearchClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudSearch {
namespace Endpoint {
CloudSearchEndpointProvider::CloudSearchEndpointProvider()
    : CloudSearchDefaultEpProviderBase(Aws::CloudSearch::CloudSearchEndpointRules::GetRulesBlob(),
                                       Aws::CloudSearch::CloudSearchEndpointRules::RulesBlobSize) {}

void CloudSearchBuiltInParameters::SetFromClientConfiguration(const CloudSearchClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudSearchClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudSearchBuiltInParameters::SetFromClientConfiguration(const CloudSearchClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudSearchClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudSearchBuiltInParameters::SetServiceSpecificParameters(const CloudSearchClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudSearch
}  // namespace Aws

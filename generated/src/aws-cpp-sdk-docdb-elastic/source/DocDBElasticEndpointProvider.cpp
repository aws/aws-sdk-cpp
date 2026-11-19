/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/DocDBElasticEndpointProvider.h>
#include <aws/docdb-elastic/internal/DocDBElasticEndpointRules.h>

namespace Aws {
#ifndef AWS_DOCDBELASTIC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DocDBElastic::Endpoint::DocDBElasticClientConfiguration,
                                                   DocDBElastic::Endpoint::DocDBElasticBuiltInParameters,
                                                   DocDBElastic::Endpoint::DocDBElasticClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DocDBElastic::Endpoint::DocDBElasticClientConfiguration,
                                                  DocDBElastic::Endpoint::DocDBElasticBuiltInParameters,
                                                  DocDBElastic::Endpoint::DocDBElasticClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DocDBElastic {
namespace Endpoint {
DocDBElasticEndpointProvider::DocDBElasticEndpointProvider()
    : DocDBElasticDefaultEpProviderBase(Aws::DocDBElastic::DocDBElasticEndpointRules::GetRulesBlob(),
                                        Aws::DocDBElastic::DocDBElasticEndpointRules::RulesBlobSize) {}

void DocDBElasticBuiltInParameters::SetFromClientConfiguration(const DocDBElasticClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DocDBElasticClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DocDBElasticBuiltInParameters::SetFromClientConfiguration(const DocDBElasticClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DocDBElasticClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DocDBElasticBuiltInParameters::SetServiceSpecificParameters(const DocDBElasticClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DocDBElastic
}  // namespace Aws

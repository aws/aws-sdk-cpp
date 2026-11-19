/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/DocDBEndpointProvider.h>
#include <aws/docdb/internal/DocDBEndpointRules.h>

namespace Aws {
#ifndef AWS_DOCDB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DocDB::Endpoint::DocDBClientConfiguration, DocDB::Endpoint::DocDBBuiltInParameters,
                                                   DocDB::Endpoint::DocDBClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DocDB::Endpoint::DocDBClientConfiguration, DocDB::Endpoint::DocDBBuiltInParameters,
                                                  DocDB::Endpoint::DocDBClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DocDB {
namespace Endpoint {
DocDBEndpointProvider::DocDBEndpointProvider()
    : DocDBDefaultEpProviderBase(Aws::DocDB::DocDBEndpointRules::GetRulesBlob(), Aws::DocDB::DocDBEndpointRules::RulesBlobSize) {}

void DocDBBuiltInParameters::SetFromClientConfiguration(const DocDBClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DocDBClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DocDBBuiltInParameters::SetFromClientConfiguration(const DocDBClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DocDBClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DocDBBuiltInParameters::SetServiceSpecificParameters(const DocDBClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DocDB
}  // namespace Aws

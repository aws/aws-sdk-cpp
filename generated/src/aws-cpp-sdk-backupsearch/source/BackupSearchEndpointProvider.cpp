/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/BackupSearchEndpointProvider.h>
#include <aws/backupsearch/internal/BackupSearchEndpointRules.h>

namespace Aws {
#ifndef AWS_BACKUPSEARCH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BackupSearch::Endpoint::BackupSearchClientConfiguration,
                                                   BackupSearch::Endpoint::BackupSearchBuiltInParameters,
                                                   BackupSearch::Endpoint::BackupSearchClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BackupSearch::Endpoint::BackupSearchClientConfiguration,
                                                  BackupSearch::Endpoint::BackupSearchBuiltInParameters,
                                                  BackupSearch::Endpoint::BackupSearchClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BackupSearch {
namespace Endpoint {
BackupSearchEndpointProvider::BackupSearchEndpointProvider()
    : BackupSearchDefaultEpProviderBase(Aws::BackupSearch::BackupSearchEndpointRules::GetRulesBlob(),
                                        Aws::BackupSearch::BackupSearchEndpointRules::RulesBlobSize) {}

void BackupSearchBuiltInParameters::SetFromClientConfiguration(const BackupSearchClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BackupSearchClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BackupSearchBuiltInParameters::SetFromClientConfiguration(const BackupSearchClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BackupSearchClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BackupSearchBuiltInParameters::SetServiceSpecificParameters(const BackupSearchClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace BackupSearch
}  // namespace Aws

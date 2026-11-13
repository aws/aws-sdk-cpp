/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/BackupEndpointProvider.h>
#include <aws/backup/internal/BackupEndpointRules.h>

namespace Aws {
#ifndef AWS_BACKUP_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Backup::Endpoint::BackupClientConfiguration, Backup::Endpoint::BackupBuiltInParameters,
                                                   Backup::Endpoint::BackupClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Backup::Endpoint::BackupClientConfiguration, Backup::Endpoint::BackupBuiltInParameters,
                                                  Backup::Endpoint::BackupClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Backup {
namespace Endpoint {
BackupEndpointProvider::BackupEndpointProvider()
    : BackupDefaultEpProviderBase(Aws::Backup::BackupEndpointRules::GetRulesBlob(), Aws::Backup::BackupEndpointRules::RulesBlobSize) {}

void BackupBuiltInParameters::SetFromClientConfiguration(const BackupClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BackupClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BackupBuiltInParameters::SetFromClientConfiguration(const BackupClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BackupClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BackupBuiltInParameters::SetServiceSpecificParameters(const BackupClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Backup
}  // namespace Aws

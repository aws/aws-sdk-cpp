/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/BackupEndpointProvider.h>
#include <aws/backup/internal/BackupEndpointRules.h>

namespace Aws {
namespace Backup {
namespace Endpoint {
BackupEndpointProvider::BackupEndpointProvider()
    : BackupDefaultEpProviderBase(Aws::Backup::BackupEndpointRules::GetRulesBlob(), Aws::Backup::BackupEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Backup
}  // namespace Aws

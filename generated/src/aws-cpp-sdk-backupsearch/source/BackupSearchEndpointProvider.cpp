/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/BackupSearchEndpointProvider.h>
#include <aws/backupsearch/internal/BackupSearchEndpointRules.h>

namespace Aws {
namespace BackupSearch {
namespace Endpoint {
BackupSearchEndpointProvider::BackupSearchEndpointProvider()
    : BackupSearchDefaultEpProviderBase(Aws::BackupSearch::BackupSearchEndpointRules::GetRulesBlob(),
                                        Aws::BackupSearch::BackupSearchEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BackupSearch
}  // namespace Aws

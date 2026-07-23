/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/DatabaseMigrationServiceEndpointProvider.h>
#include <aws/dms/internal/DatabaseMigrationServiceEndpointRules.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Endpoint {
DatabaseMigrationServiceEndpointProvider::DatabaseMigrationServiceEndpointProvider()
    : DatabaseMigrationServiceDefaultEpProviderBase(Aws::DatabaseMigrationService::DatabaseMigrationServiceEndpointRules::GetRulesBlob(),
                                                    Aws::DatabaseMigrationService::DatabaseMigrationServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DatabaseMigrationService
}  // namespace Aws

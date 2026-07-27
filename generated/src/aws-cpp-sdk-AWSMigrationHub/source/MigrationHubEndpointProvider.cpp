/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/MigrationHubEndpointProvider.h>
#include <aws/AWSMigrationHub/internal/MigrationHubEndpointRules.h>

namespace Aws {
namespace MigrationHub {
namespace Endpoint {
MigrationHubEndpointProvider::MigrationHubEndpointProvider()
    : MigrationHubDefaultEpProviderBase(Aws::MigrationHub::MigrationHubEndpointRules::GetRulesBlob(),
                                        Aws::MigrationHub::MigrationHubEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MigrationHub
}  // namespace Aws

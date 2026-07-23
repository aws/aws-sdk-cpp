/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/BackupGatewayEndpointProvider.h>
#include <aws/backup-gateway/internal/BackupGatewayEndpointRules.h>

namespace Aws {
namespace BackupGateway {
namespace Endpoint {
BackupGatewayEndpointProvider::BackupGatewayEndpointProvider()
    : BackupGatewayDefaultEpProviderBase(Aws::BackupGateway::BackupGatewayEndpointRules::GetRulesBlob(),
                                         Aws::BackupGateway::BackupGatewayEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BackupGateway
}  // namespace Aws

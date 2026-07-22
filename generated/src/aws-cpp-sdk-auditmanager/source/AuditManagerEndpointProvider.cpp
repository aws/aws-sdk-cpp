/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/AuditManagerEndpointProvider.h>
#include <aws/auditmanager/internal/AuditManagerEndpointRules.h>

namespace Aws {
namespace AuditManager {
namespace Endpoint {
AuditManagerEndpointProvider::AuditManagerEndpointProvider()
    : AuditManagerDefaultEpProviderBase(Aws::AuditManager::AuditManagerEndpointRules::GetRulesBlob(),
                                        Aws::AuditManager::AuditManagerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AuditManager
}  // namespace Aws

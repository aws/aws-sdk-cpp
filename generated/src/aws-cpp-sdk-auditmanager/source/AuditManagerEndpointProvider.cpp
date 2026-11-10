/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/AuditManagerEndpointProvider.h>
#include <aws/auditmanager/internal/AuditManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_AUDITMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AuditManager::Endpoint::AuditManagerClientConfiguration,
                                                   AuditManager::Endpoint::AuditManagerBuiltInParameters,
                                                   AuditManager::Endpoint::AuditManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AuditManager::Endpoint::AuditManagerClientConfiguration,
                                                  AuditManager::Endpoint::AuditManagerBuiltInParameters,
                                                  AuditManager::Endpoint::AuditManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AuditManager {
namespace Endpoint {
AuditManagerEndpointProvider::AuditManagerEndpointProvider()
    : AuditManagerDefaultEpProviderBase(Aws::AuditManager::AuditManagerEndpointRules::GetRulesBlob(),
                                        Aws::AuditManager::AuditManagerEndpointRules::RulesBlobSize) {}

void AuditManagerBuiltInParameters::SetFromClientConfiguration(const AuditManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AuditManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AuditManagerBuiltInParameters::SetFromClientConfiguration(const AuditManagerClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AuditManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AuditManagerBuiltInParameters::SetServiceSpecificParameters(const AuditManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AuditManager
}  // namespace Aws

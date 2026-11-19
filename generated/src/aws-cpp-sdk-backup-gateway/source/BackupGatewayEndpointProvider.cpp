/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/BackupGatewayEndpointProvider.h>
#include <aws/backup-gateway/internal/BackupGatewayEndpointRules.h>

namespace Aws {
#ifndef AWS_BACKUPGATEWAY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BackupGateway::Endpoint::BackupGatewayClientConfiguration,
                                                   BackupGateway::Endpoint::BackupGatewayBuiltInParameters,
                                                   BackupGateway::Endpoint::BackupGatewayClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BackupGateway::Endpoint::BackupGatewayClientConfiguration,
                                                  BackupGateway::Endpoint::BackupGatewayBuiltInParameters,
                                                  BackupGateway::Endpoint::BackupGatewayClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BackupGateway {
namespace Endpoint {
BackupGatewayEndpointProvider::BackupGatewayEndpointProvider()
    : BackupGatewayDefaultEpProviderBase(Aws::BackupGateway::BackupGatewayEndpointRules::GetRulesBlob(),
                                         Aws::BackupGateway::BackupGatewayEndpointRules::RulesBlobSize) {}

void BackupGatewayBuiltInParameters::SetFromClientConfiguration(const BackupGatewayClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BackupGatewayClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BackupGatewayBuiltInParameters::SetFromClientConfiguration(const BackupGatewayClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BackupGatewayClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BackupGatewayBuiltInParameters::SetServiceSpecificParameters(const BackupGatewayClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace BackupGateway
}  // namespace Aws

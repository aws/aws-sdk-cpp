/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/MigrationHubEndpointProvider.h>
#include <aws/AWSMigrationHub/internal/MigrationHubEndpointRules.h>

namespace Aws {
#ifndef AWS_MIGRATIONHUB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MigrationHub::Endpoint::MigrationHubClientConfiguration,
                                                   MigrationHub::Endpoint::MigrationHubBuiltInParameters,
                                                   MigrationHub::Endpoint::MigrationHubClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MigrationHub::Endpoint::MigrationHubClientConfiguration,
                                                  MigrationHub::Endpoint::MigrationHubBuiltInParameters,
                                                  MigrationHub::Endpoint::MigrationHubClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MigrationHub {
namespace Endpoint {
MigrationHubEndpointProvider::MigrationHubEndpointProvider()
    : MigrationHubDefaultEpProviderBase(Aws::MigrationHub::MigrationHubEndpointRules::GetRulesBlob(),
                                        Aws::MigrationHub::MigrationHubEndpointRules::RulesBlobSize) {}

void MigrationHubBuiltInParameters::SetFromClientConfiguration(const MigrationHubClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MigrationHubClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MigrationHubBuiltInParameters::SetFromClientConfiguration(const MigrationHubClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MigrationHubClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MigrationHubBuiltInParameters::SetServiceSpecificParameters(const MigrationHubClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MigrationHub
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/CodeConnectionsEndpointProvider.h>
#include <aws/codeconnections/internal/CodeConnectionsEndpointRules.h>

namespace Aws {
#ifndef AWS_CODECONNECTIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeConnections::Endpoint::CodeConnectionsClientConfiguration,
                                                   CodeConnections::Endpoint::CodeConnectionsBuiltInParameters,
                                                   CodeConnections::Endpoint::CodeConnectionsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeConnections::Endpoint::CodeConnectionsClientConfiguration,
                                                  CodeConnections::Endpoint::CodeConnectionsBuiltInParameters,
                                                  CodeConnections::Endpoint::CodeConnectionsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeConnections {
namespace Endpoint {
CodeConnectionsEndpointProvider::CodeConnectionsEndpointProvider()
    : CodeConnectionsDefaultEpProviderBase(Aws::CodeConnections::CodeConnectionsEndpointRules::GetRulesBlob(),
                                           Aws::CodeConnections::CodeConnectionsEndpointRules::RulesBlobSize) {}

void CodeConnectionsBuiltInParameters::SetFromClientConfiguration(const CodeConnectionsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeConnectionsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeConnectionsBuiltInParameters::SetFromClientConfiguration(const CodeConnectionsClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeConnectionsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeConnectionsBuiltInParameters::SetServiceSpecificParameters(const CodeConnectionsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeConnections
}  // namespace Aws

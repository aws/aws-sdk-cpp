/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-agent/DevOpsAgentEndpointProvider.h>
#include <aws/devops-agent/internal/DevOpsAgentEndpointRules.h>

namespace Aws {
#ifndef AWS_DEVOPSAGENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DevOpsAgent::Endpoint::DevOpsAgentClientConfiguration,
                                                   DevOpsAgent::Endpoint::DevOpsAgentBuiltInParameters,
                                                   DevOpsAgent::Endpoint::DevOpsAgentClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DevOpsAgent::Endpoint::DevOpsAgentClientConfiguration,
                                                  DevOpsAgent::Endpoint::DevOpsAgentBuiltInParameters,
                                                  DevOpsAgent::Endpoint::DevOpsAgentClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DevOpsAgent {
namespace Endpoint {
DevOpsAgentEndpointProvider::DevOpsAgentEndpointProvider()
    : DevOpsAgentDefaultEpProviderBase(Aws::DevOpsAgent::DevOpsAgentEndpointRules::GetRulesBlob(),
                                       Aws::DevOpsAgent::DevOpsAgentEndpointRules::RulesBlobSize) {}

void DevOpsAgentBuiltInParameters::SetFromClientConfiguration(const DevOpsAgentClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DevOpsAgentClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DevOpsAgentBuiltInParameters::SetFromClientConfiguration(const DevOpsAgentClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DevOpsAgentClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DevOpsAgentBuiltInParameters::SetServiceSpecificParameters(const DevOpsAgentClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace DevOpsAgent
}  // namespace Aws

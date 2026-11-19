/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/CodeDeployEndpointProvider.h>
#include <aws/codedeploy/internal/CodeDeployEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEDEPLOY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeDeploy::Endpoint::CodeDeployClientConfiguration,
                                                   CodeDeploy::Endpoint::CodeDeployBuiltInParameters,
                                                   CodeDeploy::Endpoint::CodeDeployClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeDeploy::Endpoint::CodeDeployClientConfiguration,
                                                  CodeDeploy::Endpoint::CodeDeployBuiltInParameters,
                                                  CodeDeploy::Endpoint::CodeDeployClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeDeploy {
namespace Endpoint {
CodeDeployEndpointProvider::CodeDeployEndpointProvider()
    : CodeDeployDefaultEpProviderBase(Aws::CodeDeploy::CodeDeployEndpointRules::GetRulesBlob(),
                                      Aws::CodeDeploy::CodeDeployEndpointRules::RulesBlobSize) {}

void CodeDeployBuiltInParameters::SetFromClientConfiguration(const CodeDeployClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeDeployClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeDeployBuiltInParameters::SetFromClientConfiguration(const CodeDeployClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeDeployClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeDeployBuiltInParameters::SetServiceSpecificParameters(const CodeDeployClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeDeploy
}  // namespace Aws

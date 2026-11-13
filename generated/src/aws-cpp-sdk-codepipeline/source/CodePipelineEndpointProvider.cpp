/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/CodePipelineEndpointProvider.h>
#include <aws/codepipeline/internal/CodePipelineEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEPIPELINE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodePipeline::Endpoint::CodePipelineClientConfiguration,
                                                   CodePipeline::Endpoint::CodePipelineBuiltInParameters,
                                                   CodePipeline::Endpoint::CodePipelineClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodePipeline::Endpoint::CodePipelineClientConfiguration,
                                                  CodePipeline::Endpoint::CodePipelineBuiltInParameters,
                                                  CodePipeline::Endpoint::CodePipelineClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodePipeline {
namespace Endpoint {
CodePipelineEndpointProvider::CodePipelineEndpointProvider()
    : CodePipelineDefaultEpProviderBase(Aws::CodePipeline::CodePipelineEndpointRules::GetRulesBlob(),
                                        Aws::CodePipeline::CodePipelineEndpointRules::RulesBlobSize) {}

void CodePipelineBuiltInParameters::SetFromClientConfiguration(const CodePipelineClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodePipelineClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodePipelineBuiltInParameters::SetFromClientConfiguration(const CodePipelineClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodePipelineClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodePipelineBuiltInParameters::SetServiceSpecificParameters(const CodePipelineClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodePipeline
}  // namespace Aws

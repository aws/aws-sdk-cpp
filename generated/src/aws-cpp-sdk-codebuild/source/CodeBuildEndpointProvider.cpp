/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/CodeBuildEndpointProvider.h>
#include <aws/codebuild/internal/CodeBuildEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEBUILD_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeBuild::Endpoint::CodeBuildClientConfiguration,
                                                   CodeBuild::Endpoint::CodeBuildBuiltInParameters,
                                                   CodeBuild::Endpoint::CodeBuildClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeBuild::Endpoint::CodeBuildClientConfiguration,
                                                  CodeBuild::Endpoint::CodeBuildBuiltInParameters,
                                                  CodeBuild::Endpoint::CodeBuildClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeBuild {
namespace Endpoint {
CodeBuildEndpointProvider::CodeBuildEndpointProvider()
    : CodeBuildDefaultEpProviderBase(Aws::CodeBuild::CodeBuildEndpointRules::GetRulesBlob(),
                                     Aws::CodeBuild::CodeBuildEndpointRules::RulesBlobSize) {}

void CodeBuildBuiltInParameters::SetFromClientConfiguration(const CodeBuildClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeBuildClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeBuildBuiltInParameters::SetFromClientConfiguration(const CodeBuildClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeBuildClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeBuildBuiltInParameters::SetServiceSpecificParameters(const CodeBuildClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeBuild
}  // namespace Aws

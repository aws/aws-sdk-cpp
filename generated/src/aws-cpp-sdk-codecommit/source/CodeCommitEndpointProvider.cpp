/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/CodeCommitEndpointProvider.h>
#include <aws/codecommit/internal/CodeCommitEndpointRules.h>

namespace Aws {
#ifndef AWS_CODECOMMIT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeCommit::Endpoint::CodeCommitClientConfiguration,
                                                   CodeCommit::Endpoint::CodeCommitBuiltInParameters,
                                                   CodeCommit::Endpoint::CodeCommitClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeCommit::Endpoint::CodeCommitClientConfiguration,
                                                  CodeCommit::Endpoint::CodeCommitBuiltInParameters,
                                                  CodeCommit::Endpoint::CodeCommitClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeCommit {
namespace Endpoint {
CodeCommitEndpointProvider::CodeCommitEndpointProvider()
    : CodeCommitDefaultEpProviderBase(Aws::CodeCommit::CodeCommitEndpointRules::GetRulesBlob(),
                                      Aws::CodeCommit::CodeCommitEndpointRules::RulesBlobSize) {}

void CodeCommitBuiltInParameters::SetFromClientConfiguration(const CodeCommitClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeCommitClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeCommitBuiltInParameters::SetFromClientConfiguration(const CodeCommitClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeCommitClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeCommitBuiltInParameters::SetServiceSpecificParameters(const CodeCommitClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeCommit
}  // namespace Aws

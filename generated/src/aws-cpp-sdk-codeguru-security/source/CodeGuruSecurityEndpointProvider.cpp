/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/CodeGuruSecurityEndpointProvider.h>
#include <aws/codeguru-security/internal/CodeGuruSecurityEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEGURUSECURITY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeGuruSecurity::Endpoint::CodeGuruSecurityClientConfiguration,
                                                   CodeGuruSecurity::Endpoint::CodeGuruSecurityBuiltInParameters,
                                                   CodeGuruSecurity::Endpoint::CodeGuruSecurityClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeGuruSecurity::Endpoint::CodeGuruSecurityClientConfiguration,
                                                  CodeGuruSecurity::Endpoint::CodeGuruSecurityBuiltInParameters,
                                                  CodeGuruSecurity::Endpoint::CodeGuruSecurityClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeGuruSecurity {
namespace Endpoint {
CodeGuruSecurityEndpointProvider::CodeGuruSecurityEndpointProvider()
    : CodeGuruSecurityDefaultEpProviderBase(Aws::CodeGuruSecurity::CodeGuruSecurityEndpointRules::GetRulesBlob(),
                                            Aws::CodeGuruSecurity::CodeGuruSecurityEndpointRules::RulesBlobSize) {}

void CodeGuruSecurityBuiltInParameters::SetFromClientConfiguration(const CodeGuruSecurityClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeGuruSecurityClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeGuruSecurityBuiltInParameters::SetFromClientConfiguration(const CodeGuruSecurityClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeGuruSecurityClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeGuruSecurityBuiltInParameters::SetServiceSpecificParameters(const CodeGuruSecurityClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeGuruSecurity
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/LexRuntimeServiceEndpointProvider.h>
#include <aws/lex/internal/LexRuntimeServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_LEXRUNTIMESERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LexRuntimeService::Endpoint::LexRuntimeServiceClientConfiguration,
                                                   LexRuntimeService::Endpoint::LexRuntimeServiceBuiltInParameters,
                                                   LexRuntimeService::Endpoint::LexRuntimeServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LexRuntimeService::Endpoint::LexRuntimeServiceClientConfiguration,
                                                  LexRuntimeService::Endpoint::LexRuntimeServiceBuiltInParameters,
                                                  LexRuntimeService::Endpoint::LexRuntimeServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LexRuntimeService {
namespace Endpoint {
LexRuntimeServiceEndpointProvider::LexRuntimeServiceEndpointProvider()
    : LexRuntimeServiceDefaultEpProviderBase(Aws::LexRuntimeService::LexRuntimeServiceEndpointRules::GetRulesBlob(),
                                             Aws::LexRuntimeService::LexRuntimeServiceEndpointRules::RulesBlobSize) {}

void LexRuntimeServiceBuiltInParameters::SetFromClientConfiguration(const LexRuntimeServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LexRuntimeServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LexRuntimeServiceBuiltInParameters::SetFromClientConfiguration(const LexRuntimeServiceClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LexRuntimeServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LexRuntimeServiceBuiltInParameters::SetServiceSpecificParameters(const LexRuntimeServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LexRuntimeService
}  // namespace Aws

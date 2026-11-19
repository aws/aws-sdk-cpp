/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/LexModelBuildingServiceEndpointProvider.h>
#include <aws/lex-models/internal/LexModelBuildingServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_LEXMODELBUILDINGSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LexModelBuildingService::Endpoint::LexModelBuildingServiceClientConfiguration,
                                                   LexModelBuildingService::Endpoint::LexModelBuildingServiceBuiltInParameters,
                                                   LexModelBuildingService::Endpoint::LexModelBuildingServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LexModelBuildingService::Endpoint::LexModelBuildingServiceClientConfiguration,
                                                  LexModelBuildingService::Endpoint::LexModelBuildingServiceBuiltInParameters,
                                                  LexModelBuildingService::Endpoint::LexModelBuildingServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LexModelBuildingService {
namespace Endpoint {
LexModelBuildingServiceEndpointProvider::LexModelBuildingServiceEndpointProvider()
    : LexModelBuildingServiceDefaultEpProviderBase(Aws::LexModelBuildingService::LexModelBuildingServiceEndpointRules::GetRulesBlob(),
                                                   Aws::LexModelBuildingService::LexModelBuildingServiceEndpointRules::RulesBlobSize) {}

void LexModelBuildingServiceBuiltInParameters::SetFromClientConfiguration(const LexModelBuildingServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LexModelBuildingServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LexModelBuildingServiceBuiltInParameters::SetFromClientConfiguration(const LexModelBuildingServiceClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LexModelBuildingServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LexModelBuildingServiceBuiltInParameters::SetServiceSpecificParameters(const LexModelBuildingServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LexModelBuildingService
}  // namespace Aws

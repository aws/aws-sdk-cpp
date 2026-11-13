/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/LexModelsV2EndpointProvider.h>
#include <aws/lexv2-models/internal/LexModelsV2EndpointRules.h>

namespace Aws {
#ifndef AWS_LEXMODELSV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LexModelsV2::Endpoint::LexModelsV2ClientConfiguration,
                                                   LexModelsV2::Endpoint::LexModelsV2BuiltInParameters,
                                                   LexModelsV2::Endpoint::LexModelsV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LexModelsV2::Endpoint::LexModelsV2ClientConfiguration,
                                                  LexModelsV2::Endpoint::LexModelsV2BuiltInParameters,
                                                  LexModelsV2::Endpoint::LexModelsV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LexModelsV2 {
namespace Endpoint {
LexModelsV2EndpointProvider::LexModelsV2EndpointProvider()
    : LexModelsV2DefaultEpProviderBase(Aws::LexModelsV2::LexModelsV2EndpointRules::GetRulesBlob(),
                                       Aws::LexModelsV2::LexModelsV2EndpointRules::RulesBlobSize) {}

void LexModelsV2BuiltInParameters::SetFromClientConfiguration(const LexModelsV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LexModelsV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LexModelsV2BuiltInParameters::SetFromClientConfiguration(const LexModelsV2ClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LexModelsV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LexModelsV2BuiltInParameters::SetServiceSpecificParameters(const LexModelsV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LexModelsV2
}  // namespace Aws

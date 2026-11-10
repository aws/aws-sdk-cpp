/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/LexRuntimeV2EndpointProvider.h>
#include <aws/lexv2-runtime/internal/LexRuntimeV2EndpointRules.h>

namespace Aws {
#ifndef AWS_LEXRUNTIMEV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LexRuntimeV2::Endpoint::LexRuntimeV2ClientConfiguration,
                                                   LexRuntimeV2::Endpoint::LexRuntimeV2BuiltInParameters,
                                                   LexRuntimeV2::Endpoint::LexRuntimeV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LexRuntimeV2::Endpoint::LexRuntimeV2ClientConfiguration,
                                                  LexRuntimeV2::Endpoint::LexRuntimeV2BuiltInParameters,
                                                  LexRuntimeV2::Endpoint::LexRuntimeV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LexRuntimeV2 {
namespace Endpoint {
LexRuntimeV2EndpointProvider::LexRuntimeV2EndpointProvider()
    : LexRuntimeV2DefaultEpProviderBase(Aws::LexRuntimeV2::LexRuntimeV2EndpointRules::GetRulesBlob(),
                                        Aws::LexRuntimeV2::LexRuntimeV2EndpointRules::RulesBlobSize) {}

void LexRuntimeV2BuiltInParameters::SetFromClientConfiguration(const LexRuntimeV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LexRuntimeV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LexRuntimeV2BuiltInParameters::SetFromClientConfiguration(const LexRuntimeV2ClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LexRuntimeV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LexRuntimeV2BuiltInParameters::SetServiceSpecificParameters(const LexRuntimeV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LexRuntimeV2
}  // namespace Aws

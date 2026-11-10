/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/KendraEndpointProvider.h>
#include <aws/kendra/internal/KendraEndpointRules.h>

namespace Aws {
#ifndef AWS_KENDRA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<kendra::Endpoint::KendraClientConfiguration, kendra::Endpoint::KendraBuiltInParameters,
                                                   kendra::Endpoint::KendraClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<kendra::Endpoint::KendraClientConfiguration, kendra::Endpoint::KendraBuiltInParameters,
                                                  kendra::Endpoint::KendraClientContextParameters>;
}  // namespace Endpoint
#endif

namespace kendra {
namespace Endpoint {
KendraEndpointProvider::KendraEndpointProvider()
    : KendraDefaultEpProviderBase(Aws::kendra::KendraEndpointRules::GetRulesBlob(), Aws::kendra::KendraEndpointRules::RulesBlobSize) {}

void KendraBuiltInParameters::SetFromClientConfiguration(const KendraClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KendraClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KendraBuiltInParameters::SetFromClientConfiguration(const KendraClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KendraClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KendraBuiltInParameters::SetServiceSpecificParameters(const KendraClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace kendra
}  // namespace Aws

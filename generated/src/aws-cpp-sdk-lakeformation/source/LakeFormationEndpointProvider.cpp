/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/LakeFormationEndpointProvider.h>
#include <aws/lakeformation/internal/LakeFormationEndpointRules.h>

namespace Aws {
#ifndef AWS_LAKEFORMATION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LakeFormation::Endpoint::LakeFormationClientConfiguration,
                                                   LakeFormation::Endpoint::LakeFormationBuiltInParameters,
                                                   LakeFormation::Endpoint::LakeFormationClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LakeFormation::Endpoint::LakeFormationClientConfiguration,
                                                  LakeFormation::Endpoint::LakeFormationBuiltInParameters,
                                                  LakeFormation::Endpoint::LakeFormationClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LakeFormation {
namespace Endpoint {
LakeFormationEndpointProvider::LakeFormationEndpointProvider()
    : LakeFormationDefaultEpProviderBase(Aws::LakeFormation::LakeFormationEndpointRules::GetRulesBlob(),
                                         Aws::LakeFormation::LakeFormationEndpointRules::RulesBlobSize) {}

void LakeFormationBuiltInParameters::SetFromClientConfiguration(const LakeFormationClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LakeFormationClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LakeFormationBuiltInParameters::SetFromClientConfiguration(const LakeFormationClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LakeFormationClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LakeFormationBuiltInParameters::SetServiceSpecificParameters(const LakeFormationClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LakeFormation
}  // namespace Aws

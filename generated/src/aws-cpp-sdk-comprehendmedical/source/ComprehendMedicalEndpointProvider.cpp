/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/ComprehendMedicalEndpointProvider.h>
#include <aws/comprehendmedical/internal/ComprehendMedicalEndpointRules.h>

namespace Aws {
#ifndef AWS_COMPREHENDMEDICAL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ComprehendMedical::Endpoint::ComprehendMedicalClientConfiguration,
                                                   ComprehendMedical::Endpoint::ComprehendMedicalBuiltInParameters,
                                                   ComprehendMedical::Endpoint::ComprehendMedicalClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ComprehendMedical::Endpoint::ComprehendMedicalClientConfiguration,
                                                  ComprehendMedical::Endpoint::ComprehendMedicalBuiltInParameters,
                                                  ComprehendMedical::Endpoint::ComprehendMedicalClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ComprehendMedical {
namespace Endpoint {
ComprehendMedicalEndpointProvider::ComprehendMedicalEndpointProvider()
    : ComprehendMedicalDefaultEpProviderBase(Aws::ComprehendMedical::ComprehendMedicalEndpointRules::GetRulesBlob(),
                                             Aws::ComprehendMedical::ComprehendMedicalEndpointRules::RulesBlobSize) {}

void ComprehendMedicalBuiltInParameters::SetFromClientConfiguration(const ComprehendMedicalClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ComprehendMedicalClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ComprehendMedicalBuiltInParameters::SetFromClientConfiguration(const ComprehendMedicalClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ComprehendMedicalClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ComprehendMedicalBuiltInParameters::SetServiceSpecificParameters(const ComprehendMedicalClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ComprehendMedical
}  // namespace Aws

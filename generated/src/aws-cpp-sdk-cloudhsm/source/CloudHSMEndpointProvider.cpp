/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/CloudHSMEndpointProvider.h>
#include <aws/cloudhsm/internal/CloudHSMEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDHSM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudHSM::Endpoint::CloudHSMClientConfiguration,
                                                   CloudHSM::Endpoint::CloudHSMBuiltInParameters,
                                                   CloudHSM::Endpoint::CloudHSMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudHSM::Endpoint::CloudHSMClientConfiguration,
                                                  CloudHSM::Endpoint::CloudHSMBuiltInParameters,
                                                  CloudHSM::Endpoint::CloudHSMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudHSM {
namespace Endpoint {
CloudHSMEndpointProvider::CloudHSMEndpointProvider()
    : CloudHSMDefaultEpProviderBase(Aws::CloudHSM::CloudHSMEndpointRules::GetRulesBlob(),
                                    Aws::CloudHSM::CloudHSMEndpointRules::RulesBlobSize) {}

void CloudHSMBuiltInParameters::SetFromClientConfiguration(const CloudHSMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudHSMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudHSMBuiltInParameters::SetFromClientConfiguration(const CloudHSMClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudHSMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudHSMBuiltInParameters::SetServiceSpecificParameters(const CloudHSMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudHSM
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/CloudHSMV2EndpointProvider.h>
#include <aws/cloudhsmv2/internal/CloudHSMV2EndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDHSMV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudHSMV2::Endpoint::CloudHSMV2ClientConfiguration,
                                                   CloudHSMV2::Endpoint::CloudHSMV2BuiltInParameters,
                                                   CloudHSMV2::Endpoint::CloudHSMV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudHSMV2::Endpoint::CloudHSMV2ClientConfiguration,
                                                  CloudHSMV2::Endpoint::CloudHSMV2BuiltInParameters,
                                                  CloudHSMV2::Endpoint::CloudHSMV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudHSMV2 {
namespace Endpoint {
CloudHSMV2EndpointProvider::CloudHSMV2EndpointProvider()
    : CloudHSMV2DefaultEpProviderBase(Aws::CloudHSMV2::CloudHSMV2EndpointRules::GetRulesBlob(),
                                      Aws::CloudHSMV2::CloudHSMV2EndpointRules::RulesBlobSize) {}

void CloudHSMV2BuiltInParameters::SetFromClientConfiguration(const CloudHSMV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudHSMV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudHSMV2BuiltInParameters::SetFromClientConfiguration(const CloudHSMV2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudHSMV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudHSMV2BuiltInParameters::SetServiceSpecificParameters(const CloudHSMV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudHSMV2
}  // namespace Aws

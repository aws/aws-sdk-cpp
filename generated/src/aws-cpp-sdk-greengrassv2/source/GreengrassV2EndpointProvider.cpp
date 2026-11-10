/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/GreengrassV2EndpointProvider.h>
#include <aws/greengrassv2/internal/GreengrassV2EndpointRules.h>

namespace Aws {
#ifndef AWS_GREENGRASSV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GreengrassV2::Endpoint::GreengrassV2ClientConfiguration,
                                                   GreengrassV2::Endpoint::GreengrassV2BuiltInParameters,
                                                   GreengrassV2::Endpoint::GreengrassV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GreengrassV2::Endpoint::GreengrassV2ClientConfiguration,
                                                  GreengrassV2::Endpoint::GreengrassV2BuiltInParameters,
                                                  GreengrassV2::Endpoint::GreengrassV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GreengrassV2 {
namespace Endpoint {
GreengrassV2EndpointProvider::GreengrassV2EndpointProvider()
    : GreengrassV2DefaultEpProviderBase(Aws::GreengrassV2::GreengrassV2EndpointRules::GetRulesBlob(),
                                        Aws::GreengrassV2::GreengrassV2EndpointRules::RulesBlobSize) {}

void GreengrassV2BuiltInParameters::SetFromClientConfiguration(const GreengrassV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GreengrassV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GreengrassV2BuiltInParameters::SetFromClientConfiguration(const GreengrassV2ClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GreengrassV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GreengrassV2BuiltInParameters::SetServiceSpecificParameters(const GreengrassV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GreengrassV2
}  // namespace Aws

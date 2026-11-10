/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam-toolbox/IAMToolboxEndpointProvider.h>
#include <aws/iam-toolbox/internal/IAMToolboxEndpointRules.h>

namespace Aws {
#ifndef AWS_IAMTOOLBOX_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IAMToolbox::Endpoint::IAMToolboxClientConfiguration,
                                                   IAMToolbox::Endpoint::IAMToolboxBuiltInParameters,
                                                   IAMToolbox::Endpoint::IAMToolboxClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IAMToolbox::Endpoint::IAMToolboxClientConfiguration,
                                                  IAMToolbox::Endpoint::IAMToolboxBuiltInParameters,
                                                  IAMToolbox::Endpoint::IAMToolboxClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IAMToolbox {
namespace Endpoint {
IAMToolboxEndpointProvider::IAMToolboxEndpointProvider()
    : IAMToolboxDefaultEpProviderBase(Aws::IAMToolbox::IAMToolboxEndpointRules::GetRulesBlob(),
                                      Aws::IAMToolbox::IAMToolboxEndpointRules::RulesBlobSize) {}

void IAMToolboxBuiltInParameters::SetFromClientConfiguration(const IAMToolboxClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IAMToolboxClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IAMToolboxBuiltInParameters::SetFromClientConfiguration(const IAMToolboxClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IAMToolboxClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IAMToolboxBuiltInParameters::SetServiceSpecificParameters(const IAMToolboxClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IAMToolbox
}  // namespace Aws

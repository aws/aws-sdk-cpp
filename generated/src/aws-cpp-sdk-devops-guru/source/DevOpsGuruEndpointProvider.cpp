/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/DevOpsGuruEndpointProvider.h>
#include <aws/devops-guru/internal/DevOpsGuruEndpointRules.h>

namespace Aws {
#ifndef AWS_DEVOPSGURU_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DevOpsGuru::Endpoint::DevOpsGuruClientConfiguration,
                                                   DevOpsGuru::Endpoint::DevOpsGuruBuiltInParameters,
                                                   DevOpsGuru::Endpoint::DevOpsGuruClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DevOpsGuru::Endpoint::DevOpsGuruClientConfiguration,
                                                  DevOpsGuru::Endpoint::DevOpsGuruBuiltInParameters,
                                                  DevOpsGuru::Endpoint::DevOpsGuruClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DevOpsGuru {
namespace Endpoint {
DevOpsGuruEndpointProvider::DevOpsGuruEndpointProvider()
    : DevOpsGuruDefaultEpProviderBase(Aws::DevOpsGuru::DevOpsGuruEndpointRules::GetRulesBlob(),
                                      Aws::DevOpsGuru::DevOpsGuruEndpointRules::RulesBlobSize) {}

void DevOpsGuruBuiltInParameters::SetFromClientConfiguration(const DevOpsGuruClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DevOpsGuruClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DevOpsGuruBuiltInParameters::SetFromClientConfiguration(const DevOpsGuruClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DevOpsGuruClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DevOpsGuruBuiltInParameters::SetServiceSpecificParameters(const DevOpsGuruClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DevOpsGuru
}  // namespace Aws

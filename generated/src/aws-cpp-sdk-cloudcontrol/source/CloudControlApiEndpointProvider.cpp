/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/CloudControlApiEndpointProvider.h>
#include <aws/cloudcontrol/internal/CloudControlApiEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDCONTROLAPI_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudControlApi::Endpoint::CloudControlApiClientConfiguration,
                                                   CloudControlApi::Endpoint::CloudControlApiBuiltInParameters,
                                                   CloudControlApi::Endpoint::CloudControlApiClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudControlApi::Endpoint::CloudControlApiClientConfiguration,
                                                  CloudControlApi::Endpoint::CloudControlApiBuiltInParameters,
                                                  CloudControlApi::Endpoint::CloudControlApiClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudControlApi {
namespace Endpoint {
CloudControlApiEndpointProvider::CloudControlApiEndpointProvider()
    : CloudControlApiDefaultEpProviderBase(Aws::CloudControlApi::CloudControlApiEndpointRules::GetRulesBlob(),
                                           Aws::CloudControlApi::CloudControlApiEndpointRules::RulesBlobSize) {}

void CloudControlApiBuiltInParameters::SetFromClientConfiguration(const CloudControlApiClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudControlApiClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudControlApiBuiltInParameters::SetFromClientConfiguration(const CloudControlApiClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudControlApiClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudControlApiBuiltInParameters::SetServiceSpecificParameters(const CloudControlApiClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudControlApi
}  // namespace Aws

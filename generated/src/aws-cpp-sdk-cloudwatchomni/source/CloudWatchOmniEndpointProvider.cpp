/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/CloudWatchOmniEndpointProvider.h>
#include <aws/cloudwatchomni/internal/CloudWatchOmniEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDWATCHOMNI_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudWatchOmni::Endpoint::CloudWatchOmniClientConfiguration,
                                                   CloudWatchOmni::Endpoint::CloudWatchOmniBuiltInParameters,
                                                   CloudWatchOmni::Endpoint::CloudWatchOmniClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudWatchOmni::Endpoint::CloudWatchOmniClientConfiguration,
                                                  CloudWatchOmni::Endpoint::CloudWatchOmniBuiltInParameters,
                                                  CloudWatchOmni::Endpoint::CloudWatchOmniClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudWatchOmni {
namespace Endpoint {
CloudWatchOmniEndpointProvider::CloudWatchOmniEndpointProvider()
    : CloudWatchOmniDefaultEpProviderBase(Aws::CloudWatchOmni::CloudWatchOmniEndpointRules::GetRulesBlob(),
                                          Aws::CloudWatchOmni::CloudWatchOmniEndpointRules::RulesBlobSize) {}

void CloudWatchOmniBuiltInParameters::SetFromClientConfiguration(const CloudWatchOmniClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudWatchOmniClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudWatchOmniBuiltInParameters::SetFromClientConfiguration(const CloudWatchOmniClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudWatchOmniClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudWatchOmniBuiltInParameters::SetServiceSpecificParameters(const CloudWatchOmniClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudWatchOmni
}  // namespace Aws

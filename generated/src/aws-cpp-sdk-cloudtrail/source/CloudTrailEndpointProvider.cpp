/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/CloudTrailEndpointProvider.h>
#include <aws/cloudtrail/internal/CloudTrailEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDTRAIL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudTrail::Endpoint::CloudTrailClientConfiguration,
                                                   CloudTrail::Endpoint::CloudTrailBuiltInParameters,
                                                   CloudTrail::Endpoint::CloudTrailClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudTrail::Endpoint::CloudTrailClientConfiguration,
                                                  CloudTrail::Endpoint::CloudTrailBuiltInParameters,
                                                  CloudTrail::Endpoint::CloudTrailClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudTrail {
namespace Endpoint {
CloudTrailEndpointProvider::CloudTrailEndpointProvider()
    : CloudTrailDefaultEpProviderBase(Aws::CloudTrail::CloudTrailEndpointRules::GetRulesBlob(),
                                      Aws::CloudTrail::CloudTrailEndpointRules::RulesBlobSize) {}

void CloudTrailBuiltInParameters::SetFromClientConfiguration(const CloudTrailClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudTrailClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudTrailBuiltInParameters::SetFromClientConfiguration(const CloudTrailClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudTrailClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudTrailBuiltInParameters::SetServiceSpecificParameters(const CloudTrailClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudTrail
}  // namespace Aws

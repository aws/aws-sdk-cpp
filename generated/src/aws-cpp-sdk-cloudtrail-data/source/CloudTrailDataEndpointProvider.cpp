/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail-data/CloudTrailDataEndpointProvider.h>
#include <aws/cloudtrail-data/internal/CloudTrailDataEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDTRAILDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudTrailData::Endpoint::CloudTrailDataClientConfiguration,
                                                   CloudTrailData::Endpoint::CloudTrailDataBuiltInParameters,
                                                   CloudTrailData::Endpoint::CloudTrailDataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudTrailData::Endpoint::CloudTrailDataClientConfiguration,
                                                  CloudTrailData::Endpoint::CloudTrailDataBuiltInParameters,
                                                  CloudTrailData::Endpoint::CloudTrailDataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudTrailData {
namespace Endpoint {
CloudTrailDataEndpointProvider::CloudTrailDataEndpointProvider()
    : CloudTrailDataDefaultEpProviderBase(Aws::CloudTrailData::CloudTrailDataEndpointRules::GetRulesBlob(),
                                          Aws::CloudTrailData::CloudTrailDataEndpointRules::RulesBlobSize) {}

void CloudTrailDataBuiltInParameters::SetFromClientConfiguration(const CloudTrailDataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudTrailDataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudTrailDataBuiltInParameters::SetFromClientConfiguration(const CloudTrailDataClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudTrailDataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudTrailDataBuiltInParameters::SetServiceSpecificParameters(const CloudTrailDataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudTrailData
}  // namespace Aws

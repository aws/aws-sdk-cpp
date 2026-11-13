/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointProvider.h>
#include <aws/chime-sdk-media-pipelines/internal/ChimeSDKMediaPipelinesEndpointRules.h>

namespace Aws {
#ifndef AWS_CHIMESDKMEDIAPIPELINES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientConfiguration,
                                                   ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesBuiltInParameters,
                                                   ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientConfiguration,
                                                  ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesBuiltInParameters,
                                                  ChimeSDKMediaPipelines::Endpoint::ChimeSDKMediaPipelinesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ChimeSDKMediaPipelines {
namespace Endpoint {
ChimeSDKMediaPipelinesEndpointProvider::ChimeSDKMediaPipelinesEndpointProvider()
    : ChimeSDKMediaPipelinesDefaultEpProviderBase(Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesEndpointRules::GetRulesBlob(),
                                                  Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesEndpointRules::RulesBlobSize) {}

void ChimeSDKMediaPipelinesBuiltInParameters::SetFromClientConfiguration(const ChimeSDKMediaPipelinesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChimeSDKMediaPipelinesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChimeSDKMediaPipelinesBuiltInParameters::SetFromClientConfiguration(const ChimeSDKMediaPipelinesClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChimeSDKMediaPipelinesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChimeSDKMediaPipelinesBuiltInParameters::SetServiceSpecificParameters(const ChimeSDKMediaPipelinesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointProvider.h>
#include <aws/kinesis-video-signaling/internal/KinesisVideoSignalingChannelsEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISVIDEOSIGNALINGCHANNELS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientConfiguration,
    KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsBuiltInParameters,
    KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientConfiguration,
    KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsBuiltInParameters,
    KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisVideoSignalingChannels {
namespace Endpoint {
KinesisVideoSignalingChannelsEndpointProvider::KinesisVideoSignalingChannelsEndpointProvider()
    : KinesisVideoSignalingChannelsDefaultEpProviderBase(
          Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsEndpointRules::GetRulesBlob(),
          Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsEndpointRules::RulesBlobSize) {}

void KinesisVideoSignalingChannelsBuiltInParameters::SetFromClientConfiguration(
    const KinesisVideoSignalingChannelsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisVideoSignalingChannelsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisVideoSignalingChannelsBuiltInParameters::SetFromClientConfiguration(
    const KinesisVideoSignalingChannelsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisVideoSignalingChannelsClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisVideoSignalingChannelsBuiltInParameters::SetServiceSpecificParameters(
    const KinesisVideoSignalingChannelsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisVideoSignalingChannels
}  // namespace Aws

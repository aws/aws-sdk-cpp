/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointProvider.h>
#include <aws/kinesis-video-signaling/internal/KinesisVideoSignalingChannelsEndpointRules.h>

namespace Aws {
namespace KinesisVideoSignalingChannels {
namespace Endpoint {
KinesisVideoSignalingChannelsEndpointProvider::KinesisVideoSignalingChannelsEndpointProvider()
    : KinesisVideoSignalingChannelsDefaultEpProviderBase(
          Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsEndpointRules::GetRulesBlob(),
          Aws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisVideoSignalingChannels
}  // namespace Aws

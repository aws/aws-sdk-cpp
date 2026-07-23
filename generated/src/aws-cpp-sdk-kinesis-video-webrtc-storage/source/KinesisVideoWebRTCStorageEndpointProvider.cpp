/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointProvider.h>
#include <aws/kinesis-video-webrtc-storage/internal/KinesisVideoWebRTCStorageEndpointRules.h>

namespace Aws {
namespace KinesisVideoWebRTCStorage {
namespace Endpoint {
KinesisVideoWebRTCStorageEndpointProvider::KinesisVideoWebRTCStorageEndpointProvider()
    : KinesisVideoWebRTCStorageDefaultEpProviderBase(
          Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageEndpointRules::GetRulesBlob(),
          Aws::KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisVideoWebRTCStorage
}  // namespace Aws

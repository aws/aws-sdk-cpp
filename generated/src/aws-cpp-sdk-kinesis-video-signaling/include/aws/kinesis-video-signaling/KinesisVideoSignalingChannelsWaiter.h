/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsClient.h>

#include <algorithm>

namespace Aws {
namespace KinesisVideoSignalingChannels {

template <typename DerivedClient = KinesisVideoSignalingChannelsClient>
class KinesisVideoSignalingChannelsWaiter {
 public:
};
}  // namespace KinesisVideoSignalingChannels
}  // namespace Aws

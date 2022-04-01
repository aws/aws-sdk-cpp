/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace KinesisVideoSignalingChannels
{
namespace KinesisVideoSignalingChannelsEndpoint
{
AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KinesisVideoSignalingChannelsEndpoint
} // namespace KinesisVideoSignalingChannels
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace Model
{
  enum class Service
  {
    NOT_SET,
    TURN
  };

namespace ServiceMapper
{
AWS_KINESISVIDEOSIGNALINGCHANNELS_API Service GetServiceForName(const Aws::String& name);

AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::String GetNameForService(Service value);
} // namespace ServiceMapper
} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws

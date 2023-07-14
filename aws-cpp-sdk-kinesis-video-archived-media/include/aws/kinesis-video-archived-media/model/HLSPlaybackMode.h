/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  enum class HLSPlaybackMode
  {
    NOT_SET,
    LIVE,
    LIVE_REPLAY,
    ON_DEMAND
  };

namespace HLSPlaybackModeMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSPlaybackMode GetHLSPlaybackModeForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForHLSPlaybackMode(HLSPlaybackMode value);
} // namespace HLSPlaybackModeMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

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
  enum class DASHPlaybackMode
  {
    NOT_SET,
    LIVE,
    LIVE_REPLAY,
    ON_DEMAND
  };

namespace DASHPlaybackModeMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API DASHPlaybackMode GetDASHPlaybackModeForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForDASHPlaybackMode(DASHPlaybackMode value);
} // namespace DASHPlaybackModeMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

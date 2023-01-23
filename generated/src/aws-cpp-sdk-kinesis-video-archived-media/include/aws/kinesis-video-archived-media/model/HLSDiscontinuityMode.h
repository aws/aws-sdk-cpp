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
  enum class HLSDiscontinuityMode
  {
    NOT_SET,
    ALWAYS,
    NEVER,
    ON_DISCONTINUITY
  };

namespace HLSDiscontinuityModeMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSDiscontinuityMode GetHLSDiscontinuityModeForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForHLSDiscontinuityMode(HLSDiscontinuityMode value);
} // namespace HLSDiscontinuityModeMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

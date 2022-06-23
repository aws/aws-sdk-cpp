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
  enum class FormatConfigKey
  {
    NOT_SET,
    JPEGQuality
  };

namespace FormatConfigKeyMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API FormatConfigKey GetFormatConfigKeyForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForFormatConfigKey(FormatConfigKey value);
} // namespace FormatConfigKeyMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

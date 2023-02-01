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
  enum class ImageError
  {
    NOT_SET,
    NO_MEDIA,
    MEDIA_ERROR
  };

namespace ImageErrorMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API ImageError GetImageErrorForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForImageError(ImageError value);
} // namespace ImageErrorMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

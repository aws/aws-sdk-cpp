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
  enum class ImageSelectorType
  {
    NOT_SET,
    PRODUCER_TIMESTAMP,
    SERVER_TIMESTAMP
  };

namespace ImageSelectorTypeMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API ImageSelectorType GetImageSelectorTypeForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForImageSelectorType(ImageSelectorType value);
} // namespace ImageSelectorTypeMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

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
  enum class ContainerFormat
  {
    NOT_SET,
    FRAGMENTED_MP4,
    MPEG_TS
  };

namespace ContainerFormatMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API ContainerFormat GetContainerFormatForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForContainerFormat(ContainerFormat value);
} // namespace ContainerFormatMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

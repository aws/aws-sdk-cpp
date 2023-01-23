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
  enum class HLSDisplayFragmentTimestamp
  {
    NOT_SET,
    ALWAYS,
    NEVER
  };

namespace HLSDisplayFragmentTimestampMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSDisplayFragmentTimestamp GetHLSDisplayFragmentTimestampForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForHLSDisplayFragmentTimestamp(HLSDisplayFragmentTimestamp value);
} // namespace HLSDisplayFragmentTimestampMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

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
  enum class DASHDisplayFragmentTimestamp
  {
    NOT_SET,
    ALWAYS,
    NEVER
  };

namespace DASHDisplayFragmentTimestampMapper
{
AWS_KINESISVIDEOARCHIVEDMEDIA_API DASHDisplayFragmentTimestamp GetDASHDisplayFragmentTimestampForName(const Aws::String& name);

AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String GetNameForDASHDisplayFragmentTimestamp(DASHDisplayFragmentTimestamp value);
} // namespace DASHDisplayFragmentTimestampMapper
} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

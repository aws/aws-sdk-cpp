/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class StreamOrder
  {
    NOT_SET,
    ORIGINAL,
    VIDEO_BITRATE_ASCENDING,
    VIDEO_BITRATE_DESCENDING
  };

namespace StreamOrderMapper
{
AWS_MEDIAPACKAGEVOD_API StreamOrder GetStreamOrderForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForStreamOrder(StreamOrder value);
} // namespace StreamOrderMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws

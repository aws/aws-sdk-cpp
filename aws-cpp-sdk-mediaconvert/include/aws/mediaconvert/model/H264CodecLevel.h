/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class H264CodecLevel
  {
    NOT_SET,
    AUTO,
    LEVEL_1,
    LEVEL_1_1,
    LEVEL_1_2,
    LEVEL_1_3,
    LEVEL_2,
    LEVEL_2_1,
    LEVEL_2_2,
    LEVEL_3,
    LEVEL_3_1,
    LEVEL_3_2,
    LEVEL_4,
    LEVEL_4_1,
    LEVEL_4_2,
    LEVEL_5,
    LEVEL_5_1,
    LEVEL_5_2
  };

namespace H264CodecLevelMapper
{
AWS_MEDIACONVERT_API H264CodecLevel GetH264CodecLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264CodecLevel(H264CodecLevel value);
} // namespace H264CodecLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

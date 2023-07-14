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
  enum class H265CodecLevel
  {
    NOT_SET,
    AUTO,
    LEVEL_1,
    LEVEL_2,
    LEVEL_2_1,
    LEVEL_3,
    LEVEL_3_1,
    LEVEL_4,
    LEVEL_4_1,
    LEVEL_5,
    LEVEL_5_1,
    LEVEL_5_2,
    LEVEL_6,
    LEVEL_6_1,
    LEVEL_6_2
  };

namespace H265CodecLevelMapper
{
AWS_MEDIACONVERT_API H265CodecLevel GetH265CodecLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265CodecLevel(H265CodecLevel value);
} // namespace H265CodecLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class H265Level
  {
    NOT_SET,
    H265_LEVEL_1,
    H265_LEVEL_2,
    H265_LEVEL_2_1,
    H265_LEVEL_3,
    H265_LEVEL_3_1,
    H265_LEVEL_4,
    H265_LEVEL_4_1,
    H265_LEVEL_5,
    H265_LEVEL_5_1,
    H265_LEVEL_5_2,
    H265_LEVEL_6,
    H265_LEVEL_6_1,
    H265_LEVEL_6_2,
    H265_LEVEL_AUTO
  };

namespace H265LevelMapper
{
AWS_MEDIALIVE_API H265Level GetH265LevelForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265Level(H265Level value);
} // namespace H265LevelMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws

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
  enum class H264AdaptiveQuantization
  {
    NOT_SET,
    OFF,
    AUTO,
    LOW,
    MEDIUM,
    HIGH,
    HIGHER,
    MAX
  };

namespace H264AdaptiveQuantizationMapper
{
AWS_MEDIACONVERT_API H264AdaptiveQuantization GetH264AdaptiveQuantizationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264AdaptiveQuantization(H264AdaptiveQuantization value);
} // namespace H264AdaptiveQuantizationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

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
  enum class H264QualityLevel
  {
    NOT_SET,
    ENHANCED_QUALITY,
    STANDARD_QUALITY
  };

namespace H264QualityLevelMapper
{
AWS_MEDIALIVE_API H264QualityLevel GetH264QualityLevelForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264QualityLevel(H264QualityLevel value);
} // namespace H264QualityLevelMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws

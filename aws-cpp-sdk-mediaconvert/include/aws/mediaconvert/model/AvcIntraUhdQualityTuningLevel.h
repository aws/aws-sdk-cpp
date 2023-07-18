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
  enum class AvcIntraUhdQualityTuningLevel
  {
    NOT_SET,
    SINGLE_PASS,
    MULTI_PASS
  };

namespace AvcIntraUhdQualityTuningLevelMapper
{
AWS_MEDIACONVERT_API AvcIntraUhdQualityTuningLevel GetAvcIntraUhdQualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAvcIntraUhdQualityTuningLevel(AvcIntraUhdQualityTuningLevel value);
} // namespace AvcIntraUhdQualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

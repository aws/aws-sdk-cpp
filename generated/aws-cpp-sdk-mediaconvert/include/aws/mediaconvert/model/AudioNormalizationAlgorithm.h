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
  enum class AudioNormalizationAlgorithm
  {
    NOT_SET,
    ITU_BS_1770_1,
    ITU_BS_1770_2,
    ITU_BS_1770_3,
    ITU_BS_1770_4
  };

namespace AudioNormalizationAlgorithmMapper
{
AWS_MEDIACONVERT_API AudioNormalizationAlgorithm GetAudioNormalizationAlgorithmForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioNormalizationAlgorithm(AudioNormalizationAlgorithm value);
} // namespace AudioNormalizationAlgorithmMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

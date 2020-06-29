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
  enum class AudioNormalizationAlgorithm
  {
    NOT_SET,
    ITU_1770_1,
    ITU_1770_2
  };

namespace AudioNormalizationAlgorithmMapper
{
AWS_MEDIALIVE_API AudioNormalizationAlgorithm GetAudioNormalizationAlgorithmForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioNormalizationAlgorithm(AudioNormalizationAlgorithm value);
} // namespace AudioNormalizationAlgorithmMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws

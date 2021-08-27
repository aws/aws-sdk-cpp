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
  enum class AudioNormalizationAlgorithmControl
  {
    NOT_SET,
    CORRECT_AUDIO
  };

namespace AudioNormalizationAlgorithmControlMapper
{
AWS_MEDIALIVE_API AudioNormalizationAlgorithmControl GetAudioNormalizationAlgorithmControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioNormalizationAlgorithmControl(AudioNormalizationAlgorithmControl value);
} // namespace AudioNormalizationAlgorithmControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws

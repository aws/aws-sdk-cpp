﻿/**
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
  enum class AudioNormalizationLoudnessLogging
  {
    NOT_SET,
    LOG,
    DONT_LOG
  };

namespace AudioNormalizationLoudnessLoggingMapper
{
AWS_MEDIACONVERT_API AudioNormalizationLoudnessLogging GetAudioNormalizationLoudnessLoggingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioNormalizationLoudnessLogging(AudioNormalizationLoudnessLogging value);
} // namespace AudioNormalizationLoudnessLoggingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws

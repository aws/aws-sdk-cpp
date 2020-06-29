/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class EmotionName
  {
    NOT_SET,
    HAPPY,
    SAD,
    ANGRY,
    CONFUSED,
    DISGUSTED,
    SURPRISED,
    CALM,
    UNKNOWN,
    FEAR
  };

namespace EmotionNameMapper
{
AWS_REKOGNITION_API EmotionName GetEmotionNameForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForEmotionName(EmotionName value);
} // namespace EmotionNameMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

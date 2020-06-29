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
  enum class LandmarkType
  {
    NOT_SET,
    eyeLeft,
    eyeRight,
    nose,
    mouthLeft,
    mouthRight,
    leftEyeBrowLeft,
    leftEyeBrowRight,
    leftEyeBrowUp,
    rightEyeBrowLeft,
    rightEyeBrowRight,
    rightEyeBrowUp,
    leftEyeLeft,
    leftEyeRight,
    leftEyeUp,
    leftEyeDown,
    rightEyeLeft,
    rightEyeRight,
    rightEyeUp,
    rightEyeDown,
    noseLeft,
    noseRight,
    mouthUp,
    mouthDown,
    leftPupil,
    rightPupil,
    upperJawlineLeft,
    midJawlineLeft,
    chinBottom,
    midJawlineRight,
    upperJawlineRight
  };

namespace LandmarkTypeMapper
{
AWS_REKOGNITION_API LandmarkType GetLandmarkTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForLandmarkType(LandmarkType value);
} // namespace LandmarkTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

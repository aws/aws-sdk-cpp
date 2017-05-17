/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    EYE_LEFT,
    EYE_RIGHT,
    NOSE,
    MOUTH_LEFT,
    MOUTH_RIGHT,
    LEFT_EYEBROW_LEFT,
    LEFT_EYEBROW_RIGHT,
    LEFT_EYEBROW_UP,
    RIGHT_EYEBROW_LEFT,
    RIGHT_EYEBROW_RIGHT,
    RIGHT_EYEBROW_UP,
    LEFT_EYE_LEFT,
    LEFT_EYE_RIGHT,
    LEFT_EYE_UP,
    LEFT_EYE_DOWN,
    RIGHT_EYE_LEFT,
    RIGHT_EYE_RIGHT,
    RIGHT_EYE_UP,
    RIGHT_EYE_DOWN,
    NOSE_LEFT,
    NOSE_RIGHT,
    MOUTH_UP,
    MOUTH_DOWN,
    LEFT_PUPIL,
    RIGHT_PUPIL
  };

namespace LandmarkTypeMapper
{
AWS_REKOGNITION_API LandmarkType GetLandmarkTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForLandmarkType(LandmarkType value);
} // namespace LandmarkTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

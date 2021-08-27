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
  enum class Reason
  {
    NOT_SET,
    EXCEEDS_MAX_FACES,
    EXTREME_POSE,
    LOW_BRIGHTNESS,
    LOW_SHARPNESS,
    LOW_CONFIDENCE,
    SMALL_BOUNDING_BOX,
    LOW_FACE_QUALITY
  };

namespace ReasonMapper
{
AWS_REKOGNITION_API Reason GetReasonForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForReason(Reason value);
} // namespace ReasonMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

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
  enum class OrientationCorrection
  {
    NOT_SET,
    ROTATE_0,
    ROTATE_90,
    ROTATE_180,
    ROTATE_270
  };

namespace OrientationCorrectionMapper
{
AWS_REKOGNITION_API OrientationCorrection GetOrientationCorrectionForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForOrientationCorrection(OrientationCorrection value);
} // namespace OrientationCorrectionMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

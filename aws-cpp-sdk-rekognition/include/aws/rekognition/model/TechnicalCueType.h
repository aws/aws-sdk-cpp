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
  enum class TechnicalCueType
  {
    NOT_SET,
    ColorBars,
    EndCredits,
    BlackFrames
  };

namespace TechnicalCueTypeMapper
{
AWS_REKOGNITION_API TechnicalCueType GetTechnicalCueTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForTechnicalCueType(TechnicalCueType value);
} // namespace TechnicalCueTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

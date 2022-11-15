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
  enum class DetectLabelsFeatureName
  {
    NOT_SET,
    GENERAL_LABELS,
    IMAGE_PROPERTIES
  };

namespace DetectLabelsFeatureNameMapper
{
AWS_REKOGNITION_API DetectLabelsFeatureName GetDetectLabelsFeatureNameForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForDetectLabelsFeatureName(DetectLabelsFeatureName value);
} // namespace DetectLabelsFeatureNameMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws

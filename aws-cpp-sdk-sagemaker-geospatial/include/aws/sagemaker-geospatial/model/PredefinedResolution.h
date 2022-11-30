/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{
  enum class PredefinedResolution
  {
    NOT_SET,
    HIGHEST,
    LOWEST,
    AVERAGE
  };

namespace PredefinedResolutionMapper
{
AWS_SAGEMAKERGEOSPATIAL_API PredefinedResolution GetPredefinedResolutionForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForPredefinedResolution(PredefinedResolution value);
} // namespace PredefinedResolutionMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws

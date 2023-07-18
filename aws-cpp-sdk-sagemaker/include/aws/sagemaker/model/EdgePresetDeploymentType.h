﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class EdgePresetDeploymentType
  {
    NOT_SET,
    GreengrassV2Component
  };

namespace EdgePresetDeploymentTypeMapper
{
AWS_SAGEMAKER_API EdgePresetDeploymentType GetEdgePresetDeploymentTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEdgePresetDeploymentType(EdgePresetDeploymentType value);
} // namespace EdgePresetDeploymentTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

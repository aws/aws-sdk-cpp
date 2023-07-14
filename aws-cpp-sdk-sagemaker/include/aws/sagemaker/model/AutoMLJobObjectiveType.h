/**
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
  enum class AutoMLJobObjectiveType
  {
    NOT_SET,
    Maximize,
    Minimize
  };

namespace AutoMLJobObjectiveTypeMapper
{
AWS_SAGEMAKER_API AutoMLJobObjectiveType GetAutoMLJobObjectiveTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLJobObjectiveType(AutoMLJobObjectiveType value);
} // namespace AutoMLJobObjectiveTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

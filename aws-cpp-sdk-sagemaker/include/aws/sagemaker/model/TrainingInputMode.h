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
  enum class TrainingInputMode
  {
    NOT_SET,
    Pipe,
    File
  };

namespace TrainingInputModeMapper
{
AWS_SAGEMAKER_API TrainingInputMode GetTrainingInputModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrainingInputMode(TrainingInputMode value);
} // namespace TrainingInputModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

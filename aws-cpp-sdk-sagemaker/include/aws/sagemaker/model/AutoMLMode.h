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
  enum class AutoMLMode
  {
    NOT_SET,
    AUTO,
    ENSEMBLING,
    HYPERPARAMETER_TUNING
  };

namespace AutoMLModeMapper
{
AWS_SAGEMAKER_API AutoMLMode GetAutoMLModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLMode(AutoMLMode value);
} // namespace AutoMLModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

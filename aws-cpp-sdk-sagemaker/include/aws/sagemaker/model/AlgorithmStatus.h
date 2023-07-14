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
  enum class AlgorithmStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Completed,
    Failed,
    Deleting
  };

namespace AlgorithmStatusMapper
{
AWS_SAGEMAKER_API AlgorithmStatus GetAlgorithmStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAlgorithmStatus(AlgorithmStatus value);
} // namespace AlgorithmStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class JobQueueType
  {
    NOT_SET,
    EKS,
    ECS,
    ECS_FARGATE,
    SAGEMAKER_TRAINING
  };

namespace JobQueueTypeMapper
{
AWS_BATCH_API JobQueueType GetJobQueueTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForJobQueueType(JobQueueType value);
} // namespace JobQueueTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws

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
  enum class EdgePackagingJobStatus
  {
    NOT_SET,
    STARTING,
    INPROGRESS,
    COMPLETED,
    FAILED,
    STOPPING,
    STOPPED
  };

namespace EdgePackagingJobStatusMapper
{
AWS_SAGEMAKER_API EdgePackagingJobStatus GetEdgePackagingJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEdgePackagingJobStatus(EdgePackagingJobStatus value);
} // namespace EdgePackagingJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

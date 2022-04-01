/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{
  enum class ModelPackagingJobStatus
  {
    NOT_SET,
    CREATED,
    RUNNING,
    SUCCEEDED,
    FAILED
  };

namespace ModelPackagingJobStatusMapper
{
AWS_LOOKOUTFORVISION_API ModelPackagingJobStatus GetModelPackagingJobStatusForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForModelPackagingJobStatus(ModelPackagingJobStatus value);
} // namespace ModelPackagingJobStatusMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

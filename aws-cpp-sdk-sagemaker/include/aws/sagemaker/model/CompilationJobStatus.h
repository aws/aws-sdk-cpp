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
  enum class CompilationJobStatus
  {
    NOT_SET,
    INPROGRESS,
    COMPLETED,
    FAILED,
    STARTING,
    STOPPING,
    STOPPED
  };

namespace CompilationJobStatusMapper
{
AWS_SAGEMAKER_API CompilationJobStatus GetCompilationJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCompilationJobStatus(CompilationJobStatus value);
} // namespace CompilationJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
  enum class PipelineExecutionStatus
  {
    NOT_SET,
    Executing,
    Stopping,
    Stopped,
    Failed,
    Succeeded
  };

namespace PipelineExecutionStatusMapper
{
AWS_SAGEMAKER_API PipelineExecutionStatus GetPipelineExecutionStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPipelineExecutionStatus(PipelineExecutionStatus value);
} // namespace PipelineExecutionStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

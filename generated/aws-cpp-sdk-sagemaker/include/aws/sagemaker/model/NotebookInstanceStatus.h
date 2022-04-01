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
  enum class NotebookInstanceStatus
  {
    NOT_SET,
    Pending,
    InService,
    Stopping,
    Stopped,
    Failed,
    Deleting,
    Updating
  };

namespace NotebookInstanceStatusMapper
{
AWS_SAGEMAKER_API NotebookInstanceStatus GetNotebookInstanceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForNotebookInstanceStatus(NotebookInstanceStatus value);
} // namespace NotebookInstanceStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

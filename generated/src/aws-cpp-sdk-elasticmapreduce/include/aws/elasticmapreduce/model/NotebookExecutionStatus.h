/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class NotebookExecutionStatus
  {
    NOT_SET,
    START_PENDING,
    STARTING,
    RUNNING,
    FINISHING,
    FINISHED,
    FAILING,
    FAILED,
    STOP_PENDING,
    STOPPING,
    STOPPED
  };

namespace NotebookExecutionStatusMapper
{
AWS_EMR_API NotebookExecutionStatus GetNotebookExecutionStatusForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForNotebookExecutionStatus(NotebookExecutionStatus value);
} // namespace NotebookExecutionStatusMapper
} // namespace Model
} // namespace EMR
} // namespace Aws

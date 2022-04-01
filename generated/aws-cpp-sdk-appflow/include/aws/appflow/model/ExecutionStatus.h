/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    InProgress,
    Successful,
    Error
  };

namespace ExecutionStatusMapper
{
AWS_APPFLOW_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws

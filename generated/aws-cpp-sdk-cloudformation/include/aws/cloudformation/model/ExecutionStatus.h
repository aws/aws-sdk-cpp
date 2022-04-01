/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    UNAVAILABLE,
    AVAILABLE,
    EXECUTE_IN_PROGRESS,
    EXECUTE_COMPLETE,
    EXECUTE_FAILED,
    OBSOLETE
  };

namespace ExecutionStatusMapper
{
AWS_CLOUDFORMATION_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

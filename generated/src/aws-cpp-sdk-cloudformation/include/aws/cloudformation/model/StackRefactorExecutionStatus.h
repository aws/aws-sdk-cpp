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
  enum class StackRefactorExecutionStatus
  {
    NOT_SET,
    UNAVAILABLE,
    AVAILABLE,
    OBSOLETE,
    EXECUTE_IN_PROGRESS,
    EXECUTE_COMPLETE,
    EXECUTE_FAILED,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_COMPLETE,
    ROLLBACK_FAILED
  };

namespace StackRefactorExecutionStatusMapper
{
AWS_CLOUDFORMATION_API StackRefactorExecutionStatus GetStackRefactorExecutionStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackRefactorExecutionStatus(StackRefactorExecutionStatus value);
} // namespace StackRefactorExecutionStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

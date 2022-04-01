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
  enum class StackSetOperationResultStatus
  {
    NOT_SET,
    PENDING,
    RUNNING,
    SUCCEEDED,
    FAILED,
    CANCELLED
  };

namespace StackSetOperationResultStatusMapper
{
AWS_CLOUDFORMATION_API StackSetOperationResultStatus GetStackSetOperationResultStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackSetOperationResultStatus(StackSetOperationResultStatus value);
} // namespace StackSetOperationResultStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

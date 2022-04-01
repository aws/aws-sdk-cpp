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
  enum class StackSetOperationStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED,
    STOPPING,
    STOPPED,
    QUEUED
  };

namespace StackSetOperationStatusMapper
{
AWS_CLOUDFORMATION_API StackSetOperationStatus GetStackSetOperationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackSetOperationStatus(StackSetOperationStatus value);
} // namespace StackSetOperationStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

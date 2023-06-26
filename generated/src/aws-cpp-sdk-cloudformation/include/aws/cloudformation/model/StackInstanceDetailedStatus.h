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
  enum class StackInstanceDetailedStatus
  {
    NOT_SET,
    PENDING,
    RUNNING,
    SUCCEEDED,
    FAILED,
    CANCELLED,
    INOPERABLE,
    SKIPPED_SUSPENDED_ACCOUNT
  };

namespace StackInstanceDetailedStatusMapper
{
AWS_CLOUDFORMATION_API StackInstanceDetailedStatus GetStackInstanceDetailedStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackInstanceDetailedStatus(StackInstanceDetailedStatus value);
} // namespace StackInstanceDetailedStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

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
  enum class StackRefactorStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED,
    DELETE_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED
  };

namespace StackRefactorStatusMapper
{
AWS_CLOUDFORMATION_API StackRefactorStatus GetStackRefactorStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackRefactorStatus(StackRefactorStatus value);
} // namespace StackRefactorStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

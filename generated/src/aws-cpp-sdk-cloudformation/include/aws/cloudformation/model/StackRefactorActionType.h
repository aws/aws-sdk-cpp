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
  enum class StackRefactorActionType
  {
    NOT_SET,
    MOVE,
    CREATE
  };

namespace StackRefactorActionTypeMapper
{
AWS_CLOUDFORMATION_API StackRefactorActionType GetStackRefactorActionTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackRefactorActionType(StackRefactorActionType value);
} // namespace StackRefactorActionTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

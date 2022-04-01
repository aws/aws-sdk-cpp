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
  enum class StackSetOperationAction
  {
    NOT_SET,
    CREATE,
    UPDATE,
    DELETE_,
    DETECT_DRIFT
  };

namespace StackSetOperationActionMapper
{
AWS_CLOUDFORMATION_API StackSetOperationAction GetStackSetOperationActionForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackSetOperationAction(StackSetOperationAction value);
} // namespace StackSetOperationActionMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

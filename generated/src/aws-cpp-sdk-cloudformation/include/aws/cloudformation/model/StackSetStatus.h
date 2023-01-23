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
  enum class StackSetStatus
  {
    NOT_SET,
    ACTIVE,
    DELETED
  };

namespace StackSetStatusMapper
{
AWS_CLOUDFORMATION_API StackSetStatus GetStackSetStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackSetStatus(StackSetStatus value);
} // namespace StackSetStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

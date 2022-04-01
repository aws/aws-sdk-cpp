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
  enum class StackInstanceStatus
  {
    NOT_SET,
    CURRENT,
    OUTDATED,
    INOPERABLE
  };

namespace StackInstanceStatusMapper
{
AWS_CLOUDFORMATION_API StackInstanceStatus GetStackInstanceStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackInstanceStatus(StackInstanceStatus value);
} // namespace StackInstanceStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

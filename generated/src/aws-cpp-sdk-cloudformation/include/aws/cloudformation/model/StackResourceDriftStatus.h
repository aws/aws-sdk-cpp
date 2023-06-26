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
  enum class StackResourceDriftStatus
  {
    NOT_SET,
    IN_SYNC,
    MODIFIED,
    DELETED,
    NOT_CHECKED
  };

namespace StackResourceDriftStatusMapper
{
AWS_CLOUDFORMATION_API StackResourceDriftStatus GetStackResourceDriftStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackResourceDriftStatus(StackResourceDriftStatus value);
} // namespace StackResourceDriftStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

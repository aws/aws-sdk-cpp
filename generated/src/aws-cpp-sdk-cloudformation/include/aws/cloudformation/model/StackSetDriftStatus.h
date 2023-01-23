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
  enum class StackSetDriftStatus
  {
    NOT_SET,
    DRIFTED,
    IN_SYNC,
    NOT_CHECKED
  };

namespace StackSetDriftStatusMapper
{
AWS_CLOUDFORMATION_API StackSetDriftStatus GetStackSetDriftStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackSetDriftStatus(StackSetDriftStatus value);
} // namespace StackSetDriftStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws

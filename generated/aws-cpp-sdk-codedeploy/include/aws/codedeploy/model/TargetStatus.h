/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class TargetStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Succeeded,
    Failed,
    Skipped,
    Unknown,
    Ready
  };

namespace TargetStatusMapper
{
AWS_CODEDEPLOY_API TargetStatus GetTargetStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTargetStatus(TargetStatus value);
} // namespace TargetStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

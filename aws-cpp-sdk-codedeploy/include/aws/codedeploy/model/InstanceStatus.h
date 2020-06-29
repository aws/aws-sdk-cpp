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
  enum class InstanceStatus
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

namespace InstanceStatusMapper
{
AWS_CODEDEPLOY_API InstanceStatus GetInstanceStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForInstanceStatus(InstanceStatus value);
} // namespace InstanceStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class InstanceRefreshStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Successful,
    Failed,
    Cancelling,
    Cancelled
  };

namespace InstanceRefreshStatusMapper
{
AWS_AUTOSCALING_API InstanceRefreshStatus GetInstanceRefreshStatusForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForInstanceRefreshStatus(InstanceRefreshStatus value);
} // namespace InstanceRefreshStatusMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws

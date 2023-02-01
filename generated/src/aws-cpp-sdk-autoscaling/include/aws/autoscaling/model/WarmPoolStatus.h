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
  enum class WarmPoolStatus
  {
    NOT_SET,
    PendingDelete
  };

namespace WarmPoolStatusMapper
{
AWS_AUTOSCALING_API WarmPoolStatus GetWarmPoolStatusForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForWarmPoolStatus(WarmPoolStatus value);
} // namespace WarmPoolStatusMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws

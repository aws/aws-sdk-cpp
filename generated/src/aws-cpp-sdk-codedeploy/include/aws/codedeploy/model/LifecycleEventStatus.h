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
  enum class LifecycleEventStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Succeeded,
    Failed,
    Skipped,
    Unknown
  };

namespace LifecycleEventStatusMapper
{
AWS_CODEDEPLOY_API LifecycleEventStatus GetLifecycleEventStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForLifecycleEventStatus(LifecycleEventStatus value);
} // namespace LifecycleEventStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

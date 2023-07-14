/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{
  enum class HumanLoopStatus
  {
    NOT_SET,
    InProgress,
    Failed,
    Completed,
    Stopped,
    Stopping
  };

namespace HumanLoopStatusMapper
{
AWS_AUGMENTEDAIRUNTIME_API HumanLoopStatus GetHumanLoopStatusForName(const Aws::String& name);

AWS_AUGMENTEDAIRUNTIME_API Aws::String GetNameForHumanLoopStatus(HumanLoopStatus value);
} // namespace HumanLoopStatusMapper
} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ActionStatus
  {
    NOT_SET,
    Unknown,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace ActionStatusMapper
{
AWS_SAGEMAKER_API ActionStatus GetActionStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForActionStatus(ActionStatus value);
} // namespace ActionStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

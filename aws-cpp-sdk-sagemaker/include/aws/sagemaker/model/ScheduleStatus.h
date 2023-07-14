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
  enum class ScheduleStatus
  {
    NOT_SET,
    Pending,
    Failed,
    Scheduled,
    Stopped
  };

namespace ScheduleStatusMapper
{
AWS_SAGEMAKER_API ScheduleStatus GetScheduleStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForScheduleStatus(ScheduleStatus value);
} // namespace ScheduleStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

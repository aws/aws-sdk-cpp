/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    PENDING,
    PENDING_CONCURRENCY,
    PENDING_DEVICE,
    PROCESSING,
    SCHEDULING,
    PREPARING,
    RUNNING,
    COMPLETED,
    STOPPING
  };

namespace ExecutionStatusMapper
{
AWS_DEVICEFARM_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

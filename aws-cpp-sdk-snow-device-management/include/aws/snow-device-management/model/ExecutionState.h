/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{
  enum class ExecutionState
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    CANCELED,
    FAILED,
    SUCCEEDED,
    REJECTED,
    TIMED_OUT
  };

namespace ExecutionStateMapper
{
AWS_SNOWDEVICEMANAGEMENT_API ExecutionState GetExecutionStateForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForExecutionState(ExecutionState value);
} // namespace ExecutionStateMapper
} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws

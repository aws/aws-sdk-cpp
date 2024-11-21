/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class CommandExecutionStatus
  {
    NOT_SET,
    CREATED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    REJECTED,
    TIMED_OUT
  };

namespace CommandExecutionStatusMapper
{
AWS_IOT_API CommandExecutionStatus GetCommandExecutionStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCommandExecutionStatus(CommandExecutionStatus value);
} // namespace CommandExecutionStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws

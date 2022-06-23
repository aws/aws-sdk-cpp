/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    EXCEPTION,
    HANDLING_EXCEPTION
  };

namespace ExecutionStatusMapper
{
AWS_TRANSFER_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws

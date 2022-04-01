/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    OPEN,
    CLOSED
  };

namespace ExecutionStatusMapper
{
AWS_SWF_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace SWF
} // namespace Aws

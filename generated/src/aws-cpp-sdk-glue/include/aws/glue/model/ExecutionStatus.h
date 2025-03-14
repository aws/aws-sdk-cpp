﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    FAILED,
    STARTED
  };

namespace ExecutionStatusMapper
{
AWS_GLUE_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws

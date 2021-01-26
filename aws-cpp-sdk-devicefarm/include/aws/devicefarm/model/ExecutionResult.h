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
  enum class ExecutionResult
  {
    NOT_SET,
    PENDING,
    PASSED,
    WARNED,
    FAILED,
    SKIPPED,
    ERRORED,
    STOPPED
  };

namespace ExecutionResultMapper
{
AWS_DEVICEFARM_API ExecutionResult GetExecutionResultForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForExecutionResult(ExecutionResult value);
} // namespace ExecutionResultMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

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
  enum class ExecutionResultCode
  {
    NOT_SET,
    PARSING_FAILED,
    VPC_ENDPOINT_SETUP_FAILED
  };

namespace ExecutionResultCodeMapper
{
AWS_DEVICEFARM_API ExecutionResultCode GetExecutionResultCodeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForExecutionResultCode(ExecutionResultCode value);
} // namespace ExecutionResultCodeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

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
  enum class ExecutionErrorType
  {
    NOT_SET,
    PERMISSION_DENIED,
    CUSTOM_STEP_FAILED,
    THROTTLED,
    ALREADY_EXISTS,
    NOT_FOUND,
    BAD_REQUEST,
    TIMEOUT,
    INTERNAL_SERVER_ERROR
  };

namespace ExecutionErrorTypeMapper
{
AWS_TRANSFER_API ExecutionErrorType GetExecutionErrorTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForExecutionErrorType(ExecutionErrorType value);
} // namespace ExecutionErrorTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws

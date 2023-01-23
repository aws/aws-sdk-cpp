/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    ALREADY_ENABLED,
    ENABLE_IN_PROGRESS,
    DISABLE_IN_PROGRESS,
    SUSPEND_IN_PROGRESS,
    RESOURCE_NOT_FOUND,
    ACCESS_DENIED,
    INTERNAL_ERROR,
    SSM_UNAVAILABLE,
    SSM_THROTTLED,
    EVENTBRIDGE_UNAVAILABLE,
    EVENTBRIDGE_THROTTLED,
    RESOURCE_SCAN_NOT_DISABLED,
    DISASSOCIATE_ALL_MEMBERS,
    ACCOUNT_IS_ISOLATED
  };

namespace ErrorCodeMapper
{
AWS_INSPECTOR2_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

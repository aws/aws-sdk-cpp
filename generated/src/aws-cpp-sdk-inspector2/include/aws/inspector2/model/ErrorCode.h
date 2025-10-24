﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class ErrorCode {
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
  ACCOUNT_IS_ISOLATED,
  EC2_SSM_RESOURCE_DATA_SYNC_LIMIT_EXCEEDED,
  EC2_SSM_ASSOCIATION_VERSION_LIMIT_EXCEEDED
};

namespace ErrorCodeMapper {
AWS_INSPECTOR2_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForErrorCode(ErrorCode value);
}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws

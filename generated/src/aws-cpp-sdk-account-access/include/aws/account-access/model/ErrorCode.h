/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AccountAccess {
namespace Model {
enum class ErrorCode { NOT_SET, AUTHORIZATION_ERROR, RESOURCE_NOT_FOUND_ERROR, SERVICE_QUOTA_EXCEEDED_ERROR, INTERNAL_SERVICE_ERROR };

namespace ErrorCodeMapper {
AWS_ACCOUNTACCESS_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_ACCOUNTACCESS_API Aws::String GetNameForErrorCode(ErrorCode value);
}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws

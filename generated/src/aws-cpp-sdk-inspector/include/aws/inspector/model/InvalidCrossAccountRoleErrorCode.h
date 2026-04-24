/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/Inspector_EXPORTS.h>

namespace Aws {
namespace Inspector {
namespace Model {
enum class InvalidCrossAccountRoleErrorCode {
  NOT_SET,
  ROLE_DOES_NOT_EXIST_OR_INVALID_TRUST_RELATIONSHIP,
  ROLE_DOES_NOT_HAVE_CORRECT_POLICY
};

namespace InvalidCrossAccountRoleErrorCodeMapper {
AWS_INSPECTOR_API InvalidCrossAccountRoleErrorCode GetInvalidCrossAccountRoleErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForInvalidCrossAccountRoleErrorCode(InvalidCrossAccountRoleErrorCode value);
}  // namespace InvalidCrossAccountRoleErrorCodeMapper
}  // namespace Model
}  // namespace Inspector
}  // namespace Aws

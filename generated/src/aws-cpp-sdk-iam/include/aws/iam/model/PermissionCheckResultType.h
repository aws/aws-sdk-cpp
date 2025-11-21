/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class PermissionCheckResultType { NOT_SET, ALLOWED, DENIED, UNSURE };

namespace PermissionCheckResultTypeMapper {
AWS_IAM_API PermissionCheckResultType GetPermissionCheckResultTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForPermissionCheckResultType(PermissionCheckResultType value);
}  // namespace PermissionCheckResultTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws

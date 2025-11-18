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
enum class PermissionCheckStatusType { NOT_SET, COMPLETE, IN_PROGRESS, FAILED };

namespace PermissionCheckStatusTypeMapper {
AWS_IAM_API PermissionCheckStatusType GetPermissionCheckStatusTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForPermissionCheckStatusType(PermissionCheckStatusType value);
}  // namespace PermissionCheckStatusTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws

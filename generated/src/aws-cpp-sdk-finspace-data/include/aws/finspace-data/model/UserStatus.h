/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>

namespace Aws {
namespace FinSpaceData {
namespace Model {
enum class UserStatus { NOT_SET, CREATING, ENABLED, DISABLED };

namespace UserStatusMapper {
AWS_FINSPACEDATA_API UserStatus GetUserStatusForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForUserStatus(UserStatus value);
}  // namespace UserStatusMapper
}  // namespace Model
}  // namespace FinSpaceData
}  // namespace Aws

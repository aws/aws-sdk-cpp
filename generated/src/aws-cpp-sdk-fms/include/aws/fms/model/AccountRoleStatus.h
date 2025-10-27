/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/FMS_EXPORTS.h>

namespace Aws {
namespace FMS {
namespace Model {
enum class AccountRoleStatus { NOT_SET, READY, CREATING, PENDING_DELETION, DELETING, DELETED };

namespace AccountRoleStatusMapper {
AWS_FMS_API AccountRoleStatus GetAccountRoleStatusForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForAccountRoleStatus(AccountRoleStatus value);
}  // namespace AccountRoleStatusMapper
}  // namespace Model
}  // namespace FMS
}  // namespace Aws

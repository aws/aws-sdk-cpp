/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

namespace Aws {
namespace IdentityStore {
namespace Model {
enum class UserStatus { NOT_SET, ENABLED, DISABLED };

namespace UserStatusMapper {
AWS_IDENTITYSTORE_API UserStatus GetUserStatusForName(const Aws::String& name);

AWS_IDENTITYSTORE_API Aws::String GetNameForUserStatus(UserStatus value);
}  // namespace UserStatusMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws

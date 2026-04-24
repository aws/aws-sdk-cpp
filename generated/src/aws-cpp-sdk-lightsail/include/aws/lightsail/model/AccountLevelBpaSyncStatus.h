/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class AccountLevelBpaSyncStatus { NOT_SET, InSync, Failed, NeverSynced, Defaulted };

namespace AccountLevelBpaSyncStatusMapper {
AWS_LIGHTSAIL_API AccountLevelBpaSyncStatus GetAccountLevelBpaSyncStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAccountLevelBpaSyncStatus(AccountLevelBpaSyncStatus value);
}  // namespace AccountLevelBpaSyncStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

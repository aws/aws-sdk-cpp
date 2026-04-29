/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Account {
namespace Model {
enum class AccountState { NOT_SET, PENDING_ACTIVATION, ACTIVE, SUSPENDED, CLOSED };

namespace AccountStateMapper {
AWS_ACCOUNT_API AccountState GetAccountStateForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForAccountState(AccountState value);
}  // namespace AccountStateMapper
}  // namespace Model
}  // namespace Account
}  // namespace Aws

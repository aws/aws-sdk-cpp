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
enum class AwsAccountState { NOT_SET, PENDING_ACTIVATION, ACTIVE, SUSPENDED, CLOSED };

namespace AwsAccountStateMapper {
AWS_ACCOUNT_API AwsAccountState GetAwsAccountStateForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForAwsAccountState(AwsAccountState value);
}  // namespace AwsAccountStateMapper
}  // namespace Model
}  // namespace Account
}  // namespace Aws

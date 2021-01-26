/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class AccountStatus
  {
    NOT_SET,
    ACTIVE,
    SUSPENDED
  };

namespace AccountStatusMapper
{
AWS_ORGANIZATIONS_API AccountStatus GetAccountStatusForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForAccountStatus(AccountStatus value);
} // namespace AccountStatusMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws

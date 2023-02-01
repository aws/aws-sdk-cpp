/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class AccountStatus
  {
    NOT_SET,
    Suspended,
    Active
  };

namespace AccountStatusMapper
{
AWS_CHIME_API AccountStatus GetAccountStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForAccountStatus(AccountStatus value);
} // namespace AccountStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws

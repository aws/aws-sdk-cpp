/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Account
{
namespace Model
{
  enum class PrimaryEmailUpdateStatus
  {
    NOT_SET,
    PENDING,
    ACCEPTED
  };

namespace PrimaryEmailUpdateStatusMapper
{
AWS_ACCOUNT_API PrimaryEmailUpdateStatus GetPrimaryEmailUpdateStatusForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForPrimaryEmailUpdateStatus(PrimaryEmailUpdateStatus value);
} // namespace PrimaryEmailUpdateStatusMapper
} // namespace Model
} // namespace Account
} // namespace Aws

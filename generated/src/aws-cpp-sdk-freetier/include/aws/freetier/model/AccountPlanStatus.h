/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{
  enum class AccountPlanStatus
  {
    NOT_SET,
    NOT_STARTED,
    ACTIVE,
    EXPIRED
  };

namespace AccountPlanStatusMapper
{
AWS_FREETIER_API AccountPlanStatus GetAccountPlanStatusForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForAccountPlanStatus(AccountPlanStatus value);
} // namespace AccountPlanStatusMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws

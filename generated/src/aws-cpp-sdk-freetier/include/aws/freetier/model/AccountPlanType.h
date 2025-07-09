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
  enum class AccountPlanType
  {
    NOT_SET,
    FREE,
    PAID
  };

namespace AccountPlanTypeMapper
{
AWS_FREETIER_API AccountPlanType GetAccountPlanTypeForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForAccountPlanType(AccountPlanType value);
} // namespace AccountPlanTypeMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class AccountScope
  {
    NOT_SET,
    PAYER,
    LINKED
  };

namespace AccountScopeMapper
{
AWS_COSTEXPLORER_API AccountScope GetAccountScopeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForAccountScope(AccountScope value);
} // namespace AccountScopeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws

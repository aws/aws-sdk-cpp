/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class AccountAccessType
  {
    NOT_SET,
    CURRENT_ACCOUNT,
    ORGANIZATION
  };

namespace AccountAccessTypeMapper
{
AWS_MANAGEDGRAFANA_API AccountAccessType GetAccountAccessTypeForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForAccountAccessType(AccountAccessType value);
} // namespace AccountAccessTypeMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws

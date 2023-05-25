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
  enum class RegionOptStatus
  {
    NOT_SET,
    ENABLED,
    ENABLING,
    DISABLING,
    DISABLED,
    ENABLED_BY_DEFAULT
  };

namespace RegionOptStatusMapper
{
AWS_ACCOUNT_API RegionOptStatus GetRegionOptStatusForName(const Aws::String& name);

AWS_ACCOUNT_API Aws::String GetNameForRegionOptStatus(RegionOptStatus value);
} // namespace RegionOptStatusMapper
} // namespace Model
} // namespace Account
} // namespace Aws

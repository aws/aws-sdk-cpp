/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class OrderBy
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace OrderByMapper
{
AWS_GUARDDUTY_API OrderBy GetOrderByForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForOrderBy(OrderBy value);
} // namespace OrderByMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws

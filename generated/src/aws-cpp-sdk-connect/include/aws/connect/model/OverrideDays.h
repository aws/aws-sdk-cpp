/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class OverrideDays
  {
    NOT_SET,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };

namespace OverrideDaysMapper
{
AWS_CONNECT_API OverrideDays GetOverrideDaysForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForOverrideDays(OverrideDays value);
} // namespace OverrideDaysMapper
} // namespace Model
} // namespace Connect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class Unit
  {
    NOT_SET,
    DAYS
  };

namespace UnitMapper
{
AWS_CUSTOMERPROFILES_API Unit GetUnitForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForUnit(Unit value);
} // namespace UnitMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

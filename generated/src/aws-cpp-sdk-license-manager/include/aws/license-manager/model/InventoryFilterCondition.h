/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{
  enum class InventoryFilterCondition
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS,
    BEGINS_WITH,
    CONTAINS
  };

namespace InventoryFilterConditionMapper
{
AWS_LICENSEMANAGER_API InventoryFilterCondition GetInventoryFilterConditionForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForInventoryFilterCondition(InventoryFilterCondition value);
} // namespace InventoryFilterConditionMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

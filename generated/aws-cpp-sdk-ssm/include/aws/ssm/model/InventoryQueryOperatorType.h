/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class InventoryQueryOperatorType
  {
    NOT_SET,
    Equal,
    NotEqual,
    BeginWith,
    LessThan,
    GreaterThan,
    Exists
  };

namespace InventoryQueryOperatorTypeMapper
{
AWS_SSM_API InventoryQueryOperatorType GetInventoryQueryOperatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInventoryQueryOperatorType(InventoryQueryOperatorType value);
} // namespace InventoryQueryOperatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws

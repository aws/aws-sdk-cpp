/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class ColumnType
  {
    NOT_SET,
    USER_ID,
    ITEM_ID,
    TIMESTAMP,
    CATEGORICAL_FEATURE,
    NUMERICAL_FEATURE
  };

namespace ColumnTypeMapper
{
AWS_CLEANROOMSML_API ColumnType GetColumnTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForColumnType(ColumnType value);
} // namespace ColumnTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws

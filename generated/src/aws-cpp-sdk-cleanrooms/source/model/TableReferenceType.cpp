/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/TableReferenceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace TableReferenceTypeMapper {

static const int GLUE_HASH = HashingUtils::HashString("GLUE");
static const int SNOWFLAKE_HASH = HashingUtils::HashString("SNOWFLAKE");
static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
static const int DATABRICKS_HASH = HashingUtils::HashString("DATABRICKS");

TableReferenceType GetTableReferenceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GLUE_HASH) {
    return TableReferenceType::GLUE;
  } else if (hashCode == SNOWFLAKE_HASH) {
    return TableReferenceType::SNOWFLAKE;
  } else if (hashCode == ATHENA_HASH) {
    return TableReferenceType::ATHENA;
  } else if (hashCode == DATABRICKS_HASH) {
    return TableReferenceType::DATABRICKS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TableReferenceType>(hashCode);
  }

  return TableReferenceType::NOT_SET;
}

Aws::String GetNameForTableReferenceType(TableReferenceType enumValue) {
  switch (enumValue) {
    case TableReferenceType::NOT_SET:
      return {};
    case TableReferenceType::GLUE:
      return "GLUE";
    case TableReferenceType::SNOWFLAKE:
      return "SNOWFLAKE";
    case TableReferenceType::ATHENA:
      return "ATHENA";
    case TableReferenceType::DATABRICKS:
      return "DATABRICKS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TableReferenceTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

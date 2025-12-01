/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableLockLevel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace DataTableLockLevelMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int DATA_TABLE_HASH = HashingUtils::HashString("DATA_TABLE");
static const int PRIMARY_VALUE_HASH = HashingUtils::HashString("PRIMARY_VALUE");
static const int ATTRIBUTE_HASH = HashingUtils::HashString("ATTRIBUTE");
static const int VALUE_HASH = HashingUtils::HashString("VALUE");

DataTableLockLevel GetDataTableLockLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return DataTableLockLevel::NONE;
  } else if (hashCode == DATA_TABLE_HASH) {
    return DataTableLockLevel::DATA_TABLE;
  } else if (hashCode == PRIMARY_VALUE_HASH) {
    return DataTableLockLevel::PRIMARY_VALUE;
  } else if (hashCode == ATTRIBUTE_HASH) {
    return DataTableLockLevel::ATTRIBUTE;
  } else if (hashCode == VALUE_HASH) {
    return DataTableLockLevel::VALUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataTableLockLevel>(hashCode);
  }

  return DataTableLockLevel::NOT_SET;
}

Aws::String GetNameForDataTableLockLevel(DataTableLockLevel enumValue) {
  switch (enumValue) {
    case DataTableLockLevel::NOT_SET:
      return {};
    case DataTableLockLevel::NONE:
      return "NONE";
    case DataTableLockLevel::DATA_TABLE:
      return "DATA_TABLE";
    case DataTableLockLevel::PRIMARY_VALUE:
      return "PRIMARY_VALUE";
    case DataTableLockLevel::ATTRIBUTE:
      return "ATTRIBUTE";
    case DataTableLockLevel::VALUE:
      return "VALUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataTableLockLevelMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws

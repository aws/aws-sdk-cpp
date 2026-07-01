/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BaseTableDependencyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace BaseTableDependencyTypeMapper {

static const int TABLE_HASH = HashingUtils::HashString("TABLE");
static const int INTERMEDIATE_TABLE_HASH = HashingUtils::HashString("INTERMEDIATE_TABLE");
static const int ID_MAPPING_TABLE_HASH = HashingUtils::HashString("ID_MAPPING_TABLE");

BaseTableDependencyType GetBaseTableDependencyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TABLE_HASH) {
    return BaseTableDependencyType::TABLE;
  } else if (hashCode == INTERMEDIATE_TABLE_HASH) {
    return BaseTableDependencyType::INTERMEDIATE_TABLE;
  } else if (hashCode == ID_MAPPING_TABLE_HASH) {
    return BaseTableDependencyType::ID_MAPPING_TABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BaseTableDependencyType>(hashCode);
  }

  return BaseTableDependencyType::NOT_SET;
}

Aws::String GetNameForBaseTableDependencyType(BaseTableDependencyType enumValue) {
  switch (enumValue) {
    case BaseTableDependencyType::NOT_SET:
      return {};
    case BaseTableDependencyType::TABLE:
      return "TABLE";
    case BaseTableDependencyType::INTERMEDIATE_TABLE:
      return "INTERMEDIATE_TABLE";
    case BaseTableDependencyType::ID_MAPPING_TABLE:
      return "ID_MAPPING_TABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BaseTableDependencyTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

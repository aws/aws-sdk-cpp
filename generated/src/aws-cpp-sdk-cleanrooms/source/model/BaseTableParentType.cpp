/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BaseTableParentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace BaseTableParentTypeMapper {

static const int DIRECT_HASH = HashingUtils::HashString("DIRECT");
static const int INDIRECT_HASH = HashingUtils::HashString("INDIRECT");

BaseTableParentType GetBaseTableParentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DIRECT_HASH) {
    return BaseTableParentType::DIRECT;
  } else if (hashCode == INDIRECT_HASH) {
    return BaseTableParentType::INDIRECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BaseTableParentType>(hashCode);
  }

  return BaseTableParentType::NOT_SET;
}

Aws::String GetNameForBaseTableParentType(BaseTableParentType enumValue) {
  switch (enumValue) {
    case BaseTableParentType::NOT_SET:
      return {};
    case BaseTableParentType::DIRECT:
      return "DIRECT";
    case BaseTableParentType::INDIRECT:
      return "INDIRECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BaseTableParentTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChildResourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace ChildResourceTypeMapper {

static const int INTERMEDIATE_TABLE_HASH = HashingUtils::HashString("INTERMEDIATE_TABLE");

ChildResourceType GetChildResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERMEDIATE_TABLE_HASH) {
    return ChildResourceType::INTERMEDIATE_TABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChildResourceType>(hashCode);
  }

  return ChildResourceType::NOT_SET;
}

Aws::String GetNameForChildResourceType(ChildResourceType enumValue) {
  switch (enumValue) {
    case ChildResourceType::NOT_SET:
      return {};
    case ChildResourceType::INTERMEDIATE_TABLE:
      return "INTERMEDIATE_TABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChildResourceTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/model/AnyResourceSupportedTypes.h>

using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {
namespace AnyResourceSupportedTypesMapper {

static const int TABLE_HASH = HashingUtils::HashString("TABLE");

AnyResourceSupportedTypes GetAnyResourceSupportedTypesForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TABLE_HASH) {
    return AnyResourceSupportedTypes::TABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnyResourceSupportedTypes>(hashCode);
  }

  return AnyResourceSupportedTypes::NOT_SET;
}

Aws::String GetNameForAnyResourceSupportedTypes(AnyResourceSupportedTypes enumValue) {
  switch (enumValue) {
    case AnyResourceSupportedTypes::NOT_SET:
      return {};
    case AnyResourceSupportedTypes::TABLE:
      return "TABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnyResourceSupportedTypesMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws

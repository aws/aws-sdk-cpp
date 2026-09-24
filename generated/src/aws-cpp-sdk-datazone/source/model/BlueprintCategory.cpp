/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/BlueprintCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace BlueprintCategoryMapper {

static const int TOOLING_HASH = HashingUtils::HashString("TOOLING");

BlueprintCategory GetBlueprintCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOOLING_HASH) {
    return BlueprintCategory::TOOLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlueprintCategory>(hashCode);
  }

  return BlueprintCategory::NOT_SET;
}

Aws::String GetNameForBlueprintCategory(BlueprintCategory enumValue) {
  switch (enumValue) {
    case BlueprintCategory::NOT_SET:
      return {};
    case BlueprintCategory::TOOLING:
      return "TOOLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlueprintCategoryMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

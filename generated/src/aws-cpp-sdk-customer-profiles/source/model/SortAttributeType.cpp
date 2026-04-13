/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/SortAttributeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace SortAttributeTypeMapper {

static const int PROFILE_HASH = HashingUtils::HashString("PROFILE");
static const int CALCULATED_HASH = HashingUtils::HashString("CALCULATED");

SortAttributeType GetSortAttributeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROFILE_HASH) {
    return SortAttributeType::PROFILE;
  } else if (hashCode == CALCULATED_HASH) {
    return SortAttributeType::CALCULATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SortAttributeType>(hashCode);
  }

  return SortAttributeType::NOT_SET;
}

Aws::String GetNameForSortAttributeType(SortAttributeType enumValue) {
  switch (enumValue) {
    case SortAttributeType::NOT_SET:
      return {};
    case SortAttributeType::PROFILE:
      return "PROFILE";
    case SortAttributeType::CALCULATED:
      return "CALCULATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SortAttributeTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws

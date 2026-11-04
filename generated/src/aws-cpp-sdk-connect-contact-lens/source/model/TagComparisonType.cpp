/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/TagComparisonType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectContactLens {
namespace Model {
namespace TagComparisonTypeMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");

TagComparisonType GetTagComparisonTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return TagComparisonType::EQUALS;
  } else if (hashCode == NOT_EQUALS_HASH) {
    return TagComparisonType::NOT_EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagComparisonType>(hashCode);
  }

  return TagComparisonType::NOT_SET;
}

Aws::String GetNameForTagComparisonType(TagComparisonType enumValue) {
  switch (enumValue) {
    case TagComparisonType::NOT_SET:
      return {};
    case TagComparisonType::EQUALS:
      return "EQUALS";
    case TagComparisonType::NOT_EQUALS:
      return "NOT_EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagComparisonTypeMapper
}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws

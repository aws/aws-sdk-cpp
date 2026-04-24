/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/SegmentSortDataType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace SegmentSortDataTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
static const int DATE_HASH = HashingUtils::HashString("DATE");

SegmentSortDataType GetSegmentSortDataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return SegmentSortDataType::STRING;
  } else if (hashCode == NUMBER_HASH) {
    return SegmentSortDataType::NUMBER;
  } else if (hashCode == DATE_HASH) {
    return SegmentSortDataType::DATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SegmentSortDataType>(hashCode);
  }

  return SegmentSortDataType::NOT_SET;
}

Aws::String GetNameForSegmentSortDataType(SegmentSortDataType enumValue) {
  switch (enumValue) {
    case SegmentSortDataType::NOT_SET:
      return {};
    case SegmentSortDataType::STRING:
      return "STRING";
    case SegmentSortDataType::NUMBER:
      return "NUMBER";
    case SegmentSortDataType::DATE:
      return "DATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SegmentSortDataTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/SourceEventCategory.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudTrail {
namespace Model {
namespace SourceEventCategoryMapper {

static const int Management_HASH = HashingUtils::HashString("Management");
static const int Data_HASH = HashingUtils::HashString("Data");

SourceEventCategory GetSourceEventCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Management_HASH) {
    return SourceEventCategory::Management;
  } else if (hashCode == Data_HASH) {
    return SourceEventCategory::Data;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEventCategory>(hashCode);
  }

  return SourceEventCategory::NOT_SET;
}

Aws::String GetNameForSourceEventCategory(SourceEventCategory enumValue) {
  switch (enumValue) {
    case SourceEventCategory::NOT_SET:
      return {};
    case SourceEventCategory::Management:
      return "Management";
    case SourceEventCategory::Data:
      return "Data";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEventCategoryMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws

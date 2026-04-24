/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListInsightsDataType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudTrail {
namespace Model {
namespace ListInsightsDataTypeMapper {

static const int InsightsEvents_HASH = HashingUtils::HashString("InsightsEvents");

ListInsightsDataType GetListInsightsDataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InsightsEvents_HASH) {
    return ListInsightsDataType::InsightsEvents;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListInsightsDataType>(hashCode);
  }

  return ListInsightsDataType::NOT_SET;
}

Aws::String GetNameForListInsightsDataType(ListInsightsDataType enumValue) {
  switch (enumValue) {
    case ListInsightsDataType::NOT_SET:
      return {};
    case ListInsightsDataType::InsightsEvents:
      return "InsightsEvents";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListInsightsDataTypeMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws

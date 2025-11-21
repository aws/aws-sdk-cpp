/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListInsightsDataDimensionKey.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudTrail {
namespace Model {
namespace ListInsightsDataDimensionKeyMapper {

static const int EventId_HASH = HashingUtils::HashString("EventId");
static const int EventName_HASH = HashingUtils::HashString("EventName");
static const int EventSource_HASH = HashingUtils::HashString("EventSource");

ListInsightsDataDimensionKey GetListInsightsDataDimensionKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EventId_HASH) {
    return ListInsightsDataDimensionKey::EventId;
  } else if (hashCode == EventName_HASH) {
    return ListInsightsDataDimensionKey::EventName;
  } else if (hashCode == EventSource_HASH) {
    return ListInsightsDataDimensionKey::EventSource;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListInsightsDataDimensionKey>(hashCode);
  }

  return ListInsightsDataDimensionKey::NOT_SET;
}

Aws::String GetNameForListInsightsDataDimensionKey(ListInsightsDataDimensionKey enumValue) {
  switch (enumValue) {
    case ListInsightsDataDimensionKey::NOT_SET:
      return {};
    case ListInsightsDataDimensionKey::EventId:
      return "EventId";
    case ListInsightsDataDimensionKey::EventName:
      return "EventName";
    case ListInsightsDataDimensionKey::EventSource:
      return "EventSource";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListInsightsDataDimensionKeyMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws

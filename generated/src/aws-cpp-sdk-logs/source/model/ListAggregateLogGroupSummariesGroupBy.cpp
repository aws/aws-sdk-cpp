/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/ListAggregateLogGroupSummariesGroupBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace ListAggregateLogGroupSummariesGroupByMapper {

static const int DATA_SOURCE_NAME_TYPE_AND_FORMAT_HASH = HashingUtils::HashString("DATA_SOURCE_NAME_TYPE_AND_FORMAT");
static const int DATA_SOURCE_NAME_AND_TYPE_HASH = HashingUtils::HashString("DATA_SOURCE_NAME_AND_TYPE");

ListAggregateLogGroupSummariesGroupBy GetListAggregateLogGroupSummariesGroupByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DATA_SOURCE_NAME_TYPE_AND_FORMAT_HASH) {
    return ListAggregateLogGroupSummariesGroupBy::DATA_SOURCE_NAME_TYPE_AND_FORMAT;
  } else if (hashCode == DATA_SOURCE_NAME_AND_TYPE_HASH) {
    return ListAggregateLogGroupSummariesGroupBy::DATA_SOURCE_NAME_AND_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListAggregateLogGroupSummariesGroupBy>(hashCode);
  }

  return ListAggregateLogGroupSummariesGroupBy::NOT_SET;
}

Aws::String GetNameForListAggregateLogGroupSummariesGroupBy(ListAggregateLogGroupSummariesGroupBy enumValue) {
  switch (enumValue) {
    case ListAggregateLogGroupSummariesGroupBy::NOT_SET:
      return {};
    case ListAggregateLogGroupSummariesGroupBy::DATA_SOURCE_NAME_TYPE_AND_FORMAT:
      return "DATA_SOURCE_NAME_TYPE_AND_FORMAT";
    case ListAggregateLogGroupSummariesGroupBy::DATA_SOURCE_NAME_AND_TYPE:
      return "DATA_SOURCE_NAME_AND_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListAggregateLogGroupSummariesGroupByMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws

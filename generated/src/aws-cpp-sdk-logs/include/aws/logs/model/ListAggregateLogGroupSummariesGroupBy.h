/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
enum class ListAggregateLogGroupSummariesGroupBy { NOT_SET, DATA_SOURCE_NAME_TYPE_AND_FORMAT, DATA_SOURCE_NAME_AND_TYPE };

namespace ListAggregateLogGroupSummariesGroupByMapper {
AWS_CLOUDWATCHLOGS_API ListAggregateLogGroupSummariesGroupBy GetListAggregateLogGroupSummariesGroupByForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForListAggregateLogGroupSummariesGroupBy(ListAggregateLogGroupSummariesGroupBy value);
}  // namespace ListAggregateLogGroupSummariesGroupByMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws

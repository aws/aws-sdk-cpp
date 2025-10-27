/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class SessionsStatisticsAggregationStatus { NOT_SET, IN_PROGRESS, TIMEOUT, FAILED, COMPLETED };

namespace SessionsStatisticsAggregationStatusMapper {
AWS_DEADLINE_API SessionsStatisticsAggregationStatus GetSessionsStatisticsAggregationStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForSessionsStatisticsAggregationStatus(SessionsStatisticsAggregationStatus value);
}  // namespace SessionsStatisticsAggregationStatusMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws

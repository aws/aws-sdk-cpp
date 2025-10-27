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
enum class UsageStatistic { NOT_SET, SUM, MIN, MAX, AVG };

namespace UsageStatisticMapper {
AWS_DEADLINE_API UsageStatistic GetUsageStatisticForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUsageStatistic(UsageStatistic value);
}  // namespace UsageStatisticMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws

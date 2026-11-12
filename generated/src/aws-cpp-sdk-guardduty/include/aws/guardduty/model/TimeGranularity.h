/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class TimeGranularity { NOT_SET, DAY, WEEK, MONTH };

namespace TimeGranularityMapper {
AWS_GUARDDUTY_API TimeGranularity GetTimeGranularityForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForTimeGranularity(TimeGranularity value);
}  // namespace TimeGranularityMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws

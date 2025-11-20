/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudTrail {
namespace Model {
enum class ListInsightsDataDimensionKey { NOT_SET, EventId, EventName, EventSource };

namespace ListInsightsDataDimensionKeyMapper {
AWS_CLOUDTRAIL_API ListInsightsDataDimensionKey GetListInsightsDataDimensionKeyForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForListInsightsDataDimensionKey(ListInsightsDataDimensionKey value);
}  // namespace ListInsightsDataDimensionKeyMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws

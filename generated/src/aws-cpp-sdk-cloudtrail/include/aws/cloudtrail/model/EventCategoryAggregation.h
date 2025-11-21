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
enum class EventCategoryAggregation { NOT_SET, Data };

namespace EventCategoryAggregationMapper {
AWS_CLOUDTRAIL_API EventCategoryAggregation GetEventCategoryAggregationForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForEventCategoryAggregation(EventCategoryAggregation value);
}  // namespace EventCategoryAggregationMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws

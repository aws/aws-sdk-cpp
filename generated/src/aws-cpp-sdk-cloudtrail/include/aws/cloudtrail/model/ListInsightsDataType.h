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
enum class ListInsightsDataType { NOT_SET, InsightsEvents };

namespace ListInsightsDataTypeMapper {
AWS_CLOUDTRAIL_API ListInsightsDataType GetListInsightsDataTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForListInsightsDataType(ListInsightsDataType value);
}  // namespace ListInsightsDataTypeMapper
}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws

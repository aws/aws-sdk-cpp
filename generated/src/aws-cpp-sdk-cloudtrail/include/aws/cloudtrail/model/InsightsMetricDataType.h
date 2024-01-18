/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class InsightsMetricDataType
  {
    NOT_SET,
    FillWithZeros,
    NonZeroData
  };

namespace InsightsMetricDataTypeMapper
{
AWS_CLOUDTRAIL_API InsightsMetricDataType GetInsightsMetricDataTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForInsightsMetricDataType(InsightsMetricDataType value);
} // namespace InsightsMetricDataTypeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws

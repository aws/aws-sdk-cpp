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
  enum class InsightType
  {
    NOT_SET,
    ApiCallRateInsight
  };

namespace InsightTypeMapper
{
AWS_CLOUDTRAIL_API InsightType GetInsightTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForInsightType(InsightType value);
} // namespace InsightTypeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws

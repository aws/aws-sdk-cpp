/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class AggregateConformancePackComplianceSummaryGroupKey
  {
    NOT_SET,
    ACCOUNT_ID,
    AWS_REGION
  };

namespace AggregateConformancePackComplianceSummaryGroupKeyMapper
{
AWS_CONFIGSERVICE_API AggregateConformancePackComplianceSummaryGroupKey GetAggregateConformancePackComplianceSummaryGroupKeyForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForAggregateConformancePackComplianceSummaryGroupKey(AggregateConformancePackComplianceSummaryGroupKey value);
} // namespace AggregateConformancePackComplianceSummaryGroupKeyMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws

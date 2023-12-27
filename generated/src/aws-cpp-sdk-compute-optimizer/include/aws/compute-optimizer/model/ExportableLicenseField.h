/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class ExportableLicenseField
  {
    NOT_SET,
    AccountId,
    ResourceArn,
    LookbackPeriodInDays,
    LastRefreshTimestamp,
    Finding,
    FindingReasonCodes,
    CurrentLicenseConfigurationNumberOfCores,
    CurrentLicenseConfigurationInstanceType,
    CurrentLicenseConfigurationOperatingSystem,
    CurrentLicenseConfigurationLicenseName,
    CurrentLicenseConfigurationLicenseEdition,
    CurrentLicenseConfigurationLicenseModel,
    CurrentLicenseConfigurationLicenseVersion,
    CurrentLicenseConfigurationMetricsSource,
    RecommendationOptionsOperatingSystem,
    RecommendationOptionsLicenseEdition,
    RecommendationOptionsLicenseModel,
    RecommendationOptionsSavingsOpportunityPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrency,
    RecommendationOptionsEstimatedMonthlySavingsValue,
    Tags
  };

namespace ExportableLicenseFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableLicenseField GetExportableLicenseFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableLicenseField(ExportableLicenseField value);
} // namespace ExportableLicenseFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws

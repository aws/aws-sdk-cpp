/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class CisScanResultsAggregatedByTargetResourceSortBy
  {
    NOT_SET,
    RESOURCE_ID,
    FAILED_COUNTS,
    ACCOUNT_ID,
    PLATFORM,
    TARGET_STATUS,
    TARGET_STATUS_REASON
  };

namespace CisScanResultsAggregatedByTargetResourceSortByMapper
{
AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceSortBy GetCisScanResultsAggregatedByTargetResourceSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisScanResultsAggregatedByTargetResourceSortBy(CisScanResultsAggregatedByTargetResourceSortBy value);
} // namespace CisScanResultsAggregatedByTargetResourceSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

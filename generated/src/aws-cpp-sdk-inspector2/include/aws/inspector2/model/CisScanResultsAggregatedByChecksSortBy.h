﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class CisScanResultsAggregatedByChecksSortBy { NOT_SET, CHECK_ID, TITLE, PLATFORM, FAILED_COUNTS, SECURITY_LEVEL };

namespace CisScanResultsAggregatedByChecksSortByMapper {
AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksSortBy GetCisScanResultsAggregatedByChecksSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisScanResultsAggregatedByChecksSortBy(CisScanResultsAggregatedByChecksSortBy value);
}  // namespace CisScanResultsAggregatedByChecksSortByMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws

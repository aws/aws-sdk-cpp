/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{
  enum class ReportFrequency
  {
    NOT_SET,
    MONTHLY,
    DAILY,
    ALL
  };

namespace ReportFrequencyMapper
{
AWS_APPLICATIONCOSTPROFILER_API ReportFrequency GetReportFrequencyForName(const Aws::String& name);

AWS_APPLICATIONCOSTPROFILER_API Aws::String GetNameForReportFrequency(ReportFrequency value);
} // namespace ReportFrequencyMapper
} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws

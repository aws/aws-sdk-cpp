/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{
  enum class ReportVersioning
  {
    NOT_SET,
    CREATE_NEW_REPORT,
    OVERWRITE_REPORT
  };

namespace ReportVersioningMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API ReportVersioning GetReportVersioningForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForReportVersioning(ReportVersioning value);
} // namespace ReportVersioningMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws

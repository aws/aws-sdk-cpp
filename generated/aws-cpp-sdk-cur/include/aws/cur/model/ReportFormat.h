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
  enum class ReportFormat
  {
    NOT_SET,
    textORcsv,
    Parquet
  };

namespace ReportFormatMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API ReportFormat GetReportFormatForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForReportFormat(ReportFormat value);
} // namespace ReportFormatMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws

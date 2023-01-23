/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class ReportFormat
  {
    NOT_SET,
    REPORT_CSV_20191124
  };

namespace ReportFormatMapper
{
AWS_FSX_API ReportFormat GetReportFormatForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForReportFormat(ReportFormat value);
} // namespace ReportFormatMapper
} // namespace Model
} // namespace FSx
} // namespace Aws

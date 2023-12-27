/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class ReportLevel
  {
    NOT_SET,
    ERRORS_ONLY,
    SUCCESSES_AND_ERRORS
  };

namespace ReportLevelMapper
{
AWS_DATASYNC_API ReportLevel GetReportLevelForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForReportLevel(ReportLevel value);
} // namespace ReportLevelMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws

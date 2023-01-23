/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class ReportStatus
  {
    NOT_SET,
    WORK_IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace ReportStatusMapper
{
AWS_INSPECTOR_API ReportStatus GetReportStatusForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForReportStatus(ReportStatus value);
} // namespace ReportStatusMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws

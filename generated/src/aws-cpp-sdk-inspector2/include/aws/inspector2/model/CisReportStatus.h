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
  enum class CisReportStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    IN_PROGRESS
  };

namespace CisReportStatusMapper
{
AWS_INSPECTOR2_API CisReportStatus GetCisReportStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisReportStatus(CisReportStatus value);
} // namespace CisReportStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

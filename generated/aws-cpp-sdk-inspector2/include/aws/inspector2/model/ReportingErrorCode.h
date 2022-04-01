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
  enum class ReportingErrorCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    INVALID_PERMISSIONS
  };

namespace ReportingErrorCodeMapper
{
AWS_INSPECTOR2_API ReportingErrorCode GetReportingErrorCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForReportingErrorCode(ReportingErrorCode value);
} // namespace ReportingErrorCodeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

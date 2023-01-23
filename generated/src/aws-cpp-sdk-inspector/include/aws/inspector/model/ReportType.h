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
  enum class ReportType
  {
    NOT_SET,
    FINDING,
    FULL
  };

namespace ReportTypeMapper
{
AWS_INSPECTOR_API ReportType GetReportTypeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForReportType(ReportType value);
} // namespace ReportTypeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws

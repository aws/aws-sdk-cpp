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
  enum class SbomReportFormat
  {
    NOT_SET,
    CYCLONEDX_1_4,
    SPDX_2_3
  };

namespace SbomReportFormatMapper
{
AWS_INSPECTOR2_API SbomReportFormat GetSbomReportFormatForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForSbomReportFormat(SbomReportFormat value);
} // namespace SbomReportFormatMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

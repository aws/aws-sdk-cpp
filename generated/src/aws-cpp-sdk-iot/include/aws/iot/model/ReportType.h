/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ReportType
  {
    NOT_SET,
    ERRORS,
    RESULTS
  };

namespace ReportTypeMapper
{
AWS_IOT_API ReportType GetReportTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForReportType(ReportType value);
} // namespace ReportTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws

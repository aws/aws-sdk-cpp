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
  enum class ReportOutputType
  {
    NOT_SET,
    SUMMARY_ONLY,
    STANDARD
  };

namespace ReportOutputTypeMapper
{
AWS_DATASYNC_API ReportOutputType GetReportOutputTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForReportOutputType(ReportOutputType value);
} // namespace ReportOutputTypeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws

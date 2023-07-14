/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{
  enum class ReportType
  {
    NOT_SET,
    LicenseConfigurationSummaryReport,
    LicenseConfigurationUsageReport
  };

namespace ReportTypeMapper
{
AWS_LICENSEMANAGER_API ReportType GetReportTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForReportType(ReportType value);
} // namespace ReportTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

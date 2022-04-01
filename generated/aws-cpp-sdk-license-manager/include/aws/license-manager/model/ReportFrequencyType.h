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
  enum class ReportFrequencyType
  {
    NOT_SET,
    DAY,
    WEEK,
    MONTH
  };

namespace ReportFrequencyTypeMapper
{
AWS_LICENSEMANAGER_API ReportFrequencyType GetReportFrequencyTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForReportFrequencyType(ReportFrequencyType value);
} // namespace ReportFrequencyTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

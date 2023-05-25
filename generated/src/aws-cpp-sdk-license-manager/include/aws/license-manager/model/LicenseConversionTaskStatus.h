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
  enum class LicenseConversionTaskStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace LicenseConversionTaskStatusMapper
{
AWS_LICENSEMANAGER_API LicenseConversionTaskStatus GetLicenseConversionTaskStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForLicenseConversionTaskStatus(LicenseConversionTaskStatus value);
} // namespace LicenseConversionTaskStatusMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

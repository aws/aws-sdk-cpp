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
  enum class LicenseStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING_AVAILABLE,
    DEACTIVATED,
    SUSPENDED,
    EXPIRED,
    PENDING_DELETE,
    DELETED
  };

namespace LicenseStatusMapper
{
AWS_LICENSEMANAGER_API LicenseStatus GetLicenseStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForLicenseStatus(LicenseStatus value);
} // namespace LicenseStatusMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

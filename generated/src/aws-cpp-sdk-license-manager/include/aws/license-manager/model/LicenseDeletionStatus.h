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
  enum class LicenseDeletionStatus
  {
    NOT_SET,
    PENDING_DELETE,
    DELETED
  };

namespace LicenseDeletionStatusMapper
{
AWS_LICENSEMANAGER_API LicenseDeletionStatus GetLicenseDeletionStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForLicenseDeletionStatus(LicenseDeletionStatus value);
} // namespace LicenseDeletionStatusMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

namespace Aws {
namespace LicenseManager {
namespace Model {
enum class LicenseAssetGroupStatus { NOT_SET, ACTIVE, DISABLED, DELETED };

namespace LicenseAssetGroupStatusMapper {
AWS_LICENSEMANAGER_API LicenseAssetGroupStatus GetLicenseAssetGroupStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForLicenseAssetGroupStatus(LicenseAssetGroupStatus value);
}  // namespace LicenseAssetGroupStatusMapper
}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws

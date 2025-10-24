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
enum class LicenseConfigurationStatus { NOT_SET, AVAILABLE, DISABLED };

namespace LicenseConfigurationStatusMapper {
AWS_LICENSEMANAGER_API LicenseConfigurationStatus GetLicenseConfigurationStatusForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForLicenseConfigurationStatus(LicenseConfigurationStatus value);
}  // namespace LicenseConfigurationStatusMapper
}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws

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
enum class GrantType { NOT_SET, BuyerGrant, DelegateGrant };

namespace GrantTypeMapper {
AWS_LICENSEMANAGER_API GrantType GetGrantTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForGrantType(GrantType value);
}  // namespace GrantTypeMapper
}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws

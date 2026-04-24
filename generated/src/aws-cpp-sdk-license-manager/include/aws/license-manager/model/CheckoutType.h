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
enum class CheckoutType { NOT_SET, PROVISIONAL, PERPETUAL };

namespace CheckoutTypeMapper {
AWS_LICENSEMANAGER_API CheckoutType GetCheckoutTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForCheckoutType(CheckoutType value);
}  // namespace CheckoutTypeMapper
}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws

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
  enum class ProductCodeType
  {
    NOT_SET,
    marketplace
  };

namespace ProductCodeTypeMapper
{
AWS_LICENSEMANAGER_API ProductCodeType GetProductCodeTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForProductCodeType(ProductCodeType value);
} // namespace ProductCodeTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

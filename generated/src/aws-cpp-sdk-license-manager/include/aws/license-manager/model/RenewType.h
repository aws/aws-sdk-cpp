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
  enum class RenewType
  {
    NOT_SET,
    None,
    Weekly,
    Monthly
  };

namespace RenewTypeMapper
{
AWS_LICENSEMANAGER_API RenewType GetRenewTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForRenewType(RenewType value);
} // namespace RenewTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

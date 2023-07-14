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
  enum class LicenseCountingType
  {
    NOT_SET,
    vCPU,
    Instance,
    Core,
    Socket
  };

namespace LicenseCountingTypeMapper
{
AWS_LICENSEMANAGER_API LicenseCountingType GetLicenseCountingTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForLicenseCountingType(LicenseCountingType value);
} // namespace LicenseCountingTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

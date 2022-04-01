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
  enum class EntitlementDataUnit
  {
    NOT_SET,
    Count,
    None,
    Seconds,
    Microseconds,
    Milliseconds,
    Bytes,
    Kilobytes,
    Megabytes,
    Gigabytes,
    Terabytes,
    Bits,
    Kilobits,
    Megabits,
    Gigabits,
    Terabits,
    Percent,
    Bytes_Second,
    Kilobytes_Second,
    Megabytes_Second,
    Gigabytes_Second,
    Terabytes_Second,
    Bits_Second,
    Kilobits_Second,
    Megabits_Second,
    Gigabits_Second,
    Terabits_Second,
    Count_Second
  };

namespace EntitlementDataUnitMapper
{
AWS_LICENSEMANAGER_API EntitlementDataUnit GetEntitlementDataUnitForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForEntitlementDataUnit(EntitlementDataUnit value);
} // namespace EntitlementDataUnitMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

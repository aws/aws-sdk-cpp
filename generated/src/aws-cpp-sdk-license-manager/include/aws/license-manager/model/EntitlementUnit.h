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
  enum class EntitlementUnit
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

namespace EntitlementUnitMapper
{
AWS_LICENSEMANAGER_API EntitlementUnit GetEntitlementUnitForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForEntitlementUnit(EntitlementUnit value);
} // namespace EntitlementUnitMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

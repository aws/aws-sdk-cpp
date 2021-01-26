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
  enum class AllowedOperation
  {
    NOT_SET,
    CreateGrant,
    CheckoutLicense,
    CheckoutBorrowLicense,
    CheckInLicense,
    ExtendConsumptionLicense,
    ListPurchasedLicenses,
    CreateToken
  };

namespace AllowedOperationMapper
{
AWS_LICENSEMANAGER_API AllowedOperation GetAllowedOperationForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForAllowedOperation(AllowedOperation value);
} // namespace AllowedOperationMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

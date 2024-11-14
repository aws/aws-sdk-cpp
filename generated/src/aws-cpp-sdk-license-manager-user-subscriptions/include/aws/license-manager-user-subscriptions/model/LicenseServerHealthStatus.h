/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  enum class LicenseServerHealthStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY,
    NOT_APPLICABLE
  };

namespace LicenseServerHealthStatusMapper
{
AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerHealthStatus GetLicenseServerHealthStatusForName(const Aws::String& name);

AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String GetNameForLicenseServerHealthStatus(LicenseServerHealthStatus value);
} // namespace LicenseServerHealthStatusMapper
} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

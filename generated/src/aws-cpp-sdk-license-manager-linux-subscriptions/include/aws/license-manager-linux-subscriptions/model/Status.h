/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    InProgress,
    Completed,
    Successful,
    Failed
  };

namespace StatusMapper
{
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Status GetStatusForName(const Aws::String& name);

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws

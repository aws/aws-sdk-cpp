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
  enum class OrganizationIntegration
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace OrganizationIntegrationMapper
{
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API OrganizationIntegration GetOrganizationIntegrationForName(const Aws::String& name);

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String GetNameForOrganizationIntegration(OrganizationIntegration value);
} // namespace OrganizationIntegrationMapper
} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws

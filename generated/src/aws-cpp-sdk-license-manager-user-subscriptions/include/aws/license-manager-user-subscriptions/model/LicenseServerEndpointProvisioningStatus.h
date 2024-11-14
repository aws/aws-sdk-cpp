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
  enum class LicenseServerEndpointProvisioningStatus
  {
    NOT_SET,
    PROVISIONING,
    PROVISIONING_FAILED,
    PROVISIONED,
    DELETING,
    DELETION_FAILED,
    DELETED
  };

namespace LicenseServerEndpointProvisioningStatusMapper
{
AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerEndpointProvisioningStatus GetLicenseServerEndpointProvisioningStatusForName(const Aws::String& name);

AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String GetNameForLicenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus value);
} // namespace LicenseServerEndpointProvisioningStatusMapper
} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

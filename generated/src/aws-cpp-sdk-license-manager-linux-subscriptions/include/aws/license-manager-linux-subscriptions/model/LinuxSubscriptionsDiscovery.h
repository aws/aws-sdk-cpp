/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
namespace Model {
enum class LinuxSubscriptionsDiscovery { NOT_SET, Enabled, Disabled };

namespace LinuxSubscriptionsDiscoveryMapper {
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscovery GetLinuxSubscriptionsDiscoveryForName(const Aws::String& name);

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String GetNameForLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery value);
}  // namespace LinuxSubscriptionsDiscoveryMapper
}  // namespace Model
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws

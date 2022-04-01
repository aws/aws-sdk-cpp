/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace LicenseManagerUserSubscriptions
{
namespace LicenseManagerUserSubscriptionsEndpoint
{
AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace LicenseManagerUserSubscriptionsEndpoint
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

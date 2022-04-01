/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace LicenseManager
{
namespace LicenseManagerEndpoint
{
AWS_LICENSEMANAGER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace LicenseManagerEndpoint
} // namespace LicenseManager
} // namespace Aws

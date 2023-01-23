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
  enum class ResourceType
  {
    NOT_SET,
    EC2_INSTANCE,
    EC2_HOST,
    EC2_AMI,
    RDS,
    SYSTEMS_MANAGER_MANAGED_INSTANCE
  };

namespace ResourceTypeMapper
{
AWS_LICENSEMANAGER_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws

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
  enum class ActiveDirectoryType
  {
    NOT_SET,
    SELF_MANAGED,
    AWS_MANAGED
  };

namespace ActiveDirectoryTypeMapper
{
AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryType GetActiveDirectoryTypeForName(const Aws::String& name);

AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String GetNameForActiveDirectoryType(ActiveDirectoryType value);
} // namespace ActiveDirectoryTypeMapper
} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

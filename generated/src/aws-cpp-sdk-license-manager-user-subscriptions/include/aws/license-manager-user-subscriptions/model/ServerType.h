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
  enum class ServerType
  {
    NOT_SET,
    RDS_SAL
  };

namespace ServerTypeMapper
{
AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ServerType GetServerTypeForName(const Aws::String& name);

AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String GetNameForServerType(ServerType value);
} // namespace ServerTypeMapper
} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws

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
  enum class Operator
  {
    NOT_SET,
    Equal,
    NotEqual,
    Contains
  };

namespace OperatorMapper
{
AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Operator GetOperatorForName(const Aws::String& name);

AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws

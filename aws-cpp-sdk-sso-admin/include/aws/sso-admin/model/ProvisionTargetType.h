/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class ProvisionTargetType
  {
    NOT_SET,
    AWS_ACCOUNT,
    ALL_PROVISIONED_ACCOUNTS
  };

namespace ProvisionTargetTypeMapper
{
AWS_SSOADMIN_API ProvisionTargetType GetProvisionTargetTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForProvisionTargetType(ProvisionTargetType value);
} // namespace ProvisionTargetTypeMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

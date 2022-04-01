/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class UserRole
  {
    NOT_SET,
    USER,
    RESOURCE,
    SYSTEM_USER
  };

namespace UserRoleMapper
{
AWS_WORKMAIL_API UserRole GetUserRoleForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForUserRole(UserRole value);
} // namespace UserRoleMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws

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
  enum class ImpersonationRoleType
  {
    NOT_SET,
    FULL_ACCESS,
    READ_ONLY
  };

namespace ImpersonationRoleTypeMapper
{
AWS_WORKMAIL_API ImpersonationRoleType GetImpersonationRoleTypeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForImpersonationRoleType(ImpersonationRoleType value);
} // namespace ImpersonationRoleTypeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws

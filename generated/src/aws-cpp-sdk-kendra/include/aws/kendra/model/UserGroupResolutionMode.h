/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class UserGroupResolutionMode
  {
    NOT_SET,
    AWS_SSO,
    NONE
  };

namespace UserGroupResolutionModeMapper
{
AWS_KENDRA_API UserGroupResolutionMode GetUserGroupResolutionModeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForUserGroupResolutionMode(UserGroupResolutionMode value);
} // namespace UserGroupResolutionModeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws

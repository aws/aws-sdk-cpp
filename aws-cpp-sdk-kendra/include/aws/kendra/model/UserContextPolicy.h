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
  enum class UserContextPolicy
  {
    NOT_SET,
    ATTRIBUTE_FILTER,
    USER_TOKEN
  };

namespace UserContextPolicyMapper
{
AWS_KENDRA_API UserContextPolicy GetUserContextPolicyForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForUserContextPolicy(UserContextPolicy value);
} // namespace UserContextPolicyMapper
} // namespace Model
} // namespace kendra
} // namespace Aws

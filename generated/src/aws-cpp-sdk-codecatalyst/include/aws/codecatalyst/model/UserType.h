/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class UserType
  {
    NOT_SET,
    USER,
    AWS_ACCOUNT,
    UNKNOWN
  };

namespace UserTypeMapper
{
AWS_CODECATALYST_API UserType GetUserTypeForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForUserType(UserType value);
} // namespace UserTypeMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class UserType
  {
    NOT_SET,
    USER,
    ADMIN,
    POWERUSER,
    MINIMALUSER,
    WORKSPACESUSER
  };

namespace UserTypeMapper
{
AWS_WORKDOCS_API UserType GetUserTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForUserType(UserType value);
} // namespace UserTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws

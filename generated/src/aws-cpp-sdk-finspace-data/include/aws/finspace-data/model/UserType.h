/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class UserType
  {
    NOT_SET,
    SUPER_USER,
    APP_USER
  };

namespace UserTypeMapper
{
AWS_FINSPACEDATA_API UserType GetUserTypeForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForUserType(UserType value);
} // namespace UserTypeMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws

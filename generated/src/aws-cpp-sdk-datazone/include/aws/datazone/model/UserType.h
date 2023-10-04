/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class UserType
  {
    NOT_SET,
    IAM_USER,
    IAM_ROLE,
    SSO_USER
  };

namespace UserTypeMapper
{
AWS_DATAZONE_API UserType GetUserTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForUserType(UserType value);
} // namespace UserTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws

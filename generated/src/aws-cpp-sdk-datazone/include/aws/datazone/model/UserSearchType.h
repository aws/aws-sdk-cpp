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
  enum class UserSearchType
  {
    NOT_SET,
    SSO_USER,
    DATAZONE_USER,
    DATAZONE_SSO_USER,
    DATAZONE_IAM_USER
  };

namespace UserSearchTypeMapper
{
AWS_DATAZONE_API UserSearchType GetUserSearchTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForUserSearchType(UserSearchType value);
} // namespace UserSearchTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws

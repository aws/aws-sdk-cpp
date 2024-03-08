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
  enum class UserProfileType
  {
    NOT_SET,
    IAM,
    SSO
  };

namespace UserProfileTypeMapper
{
AWS_DATAZONE_API UserProfileType GetUserProfileTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForUserProfileType(UserProfileType value);
} // namespace UserProfileTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws

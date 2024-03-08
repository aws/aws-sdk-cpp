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
  enum class UserProfileStatus
  {
    NOT_SET,
    ASSIGNED,
    NOT_ASSIGNED,
    ACTIVATED,
    DEACTIVATED
  };

namespace UserProfileStatusMapper
{
AWS_DATAZONE_API UserProfileStatus GetUserProfileStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForUserProfileStatus(UserProfileStatus value);
} // namespace UserProfileStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
